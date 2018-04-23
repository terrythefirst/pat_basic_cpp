#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void* b){
	return (*(double*)a-*(double*)b)>0?1:-1;
}
int main(void){
	int count, i,j,ans=0;
	double p;
	double array[100000];
	scanf("%d%lf",&count,&p);
	for(i=0;i<count;i++){
		scanf("%lf",&array[i]);
	}
	qsort(array,count,sizeof(double),cmp);

	for(i=0;i<count;i++){
		for(j=ans+i;j<count;j++){
			if(array[j]>array[i]*p){
				break;
			}
			if(j-i+1>ans){
				ans = j-i+1;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}