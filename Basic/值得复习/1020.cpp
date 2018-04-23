#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	double quantity;
	double total_price;
	double per_price;
	struct node* next;
} merchandise_node;

int compare_node(const void*a,const void*b){
	merchandise_node* aa = (merchandise_node*)a;
	merchandise_node* bb = (merchandise_node*)b;
	return bb->per_price>aa->per_price?1:-1; /////重点！！！！！！
	/*
	检测点0 一直没过去 竟然是因为这个！！
	原：return bb->per_price - aa->per_price; 
	  返回值是int 所以会 截断 返回的是0！！ 
	*/ 
}
int main(void){
	int n,i;
	double require;
	merchandise_node nodes[1100];
	double profit = 0;
	
	scanf("%d%lf",&n,&require);
	for(i=0;i<n;i++)
		scanf("%lf",&nodes[i].quantity);		
	for(i=0;i<n;i++){
		scanf("%lf",&nodes[i].total_price);
		nodes[i].per_price= nodes[i].total_price*1.0/nodes[i].quantity;
	}
	qsort(nodes,n,sizeof(merchandise_node),compare_node);	
	for(i=0;require!=0;i++){
		if(nodes[i].quantity<require){
			profit += nodes[i].total_price;
			require-=nodes[i].quantity;
			if( i == n-1)                     
            {
                require = 0;
            }
		}else{
			profit += require*nodes[i].per_price;
			require=0;
		}
	}
	
	printf("%0.2lf\n",profit);
	
	return 0;
}