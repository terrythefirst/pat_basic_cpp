/*#include <stdio.h>
#define ARRAYLENTH 100

int main()
{
	int ans[ARRAYLENTH];
	int c,pow,count,flag;
	do{
		flag = scanf("%d%d",&c,&pow);
		if(pow!=0){
			ans[count++]=c*pow;
			ans[count++]=pow-1;	
		}	
	}while(flag!=EOF);
	
	for(int i=0;i<count-1;i+=2){
		if(i!=0)printf(" ");
		printf("%d %d",ans[i],ans[i+1]);
	}
	return 0;
}*/

#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    int n, e, flag = 0;  
    while (scanf("%d%d", &n, &e) != EOF)  
    {  
        if( n*e )  
        {  
            if(flag)  
                printf(" ");  
            else  
                flag = 1;  
            printf("%d %d", n*e, e-1);  
        }  
    }  
    if(!flag) printf("0 0");  
      
    return 0;  
}