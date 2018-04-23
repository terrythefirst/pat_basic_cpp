#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void* b) {  
 return *((int *)a) - *((int *)b);  
}  
int main(void){
	int n,i,j;
	int input[101],during[101];
	scanf("%d",&n);
	for ( int i = 0; i < n; i ++ ) {
		scanf("%d", &input[i]);
	}
	for ( int i = 0; i < n; i ++ ) {
		scanf("%d", &during[i]);
	}
	for(i=0;i<n-1&&during[i]<=during[i+1];i++);
	for(j=i+1;j<n&&input[j]==during[j];j++);
	if(j==n){
		printf("Insertion Sort\n");
		qsort(input, i + 2, sizeof(int), cmp);  
	}else {
		printf("Merge Sort\n");
		int k = 1, flag = 1;
        while(flag) {
            flag = 0;
            for (i = 0; i < n; i++) {
                if (input[i] != during[i])
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < n / k; i++)
                qsort(input + i * k, (i + 1) * k-i*k,sizeof(int),cmp);
            qsort(input + n / k * k, n-n/k*k,sizeof(int),cmp);
        } 
	}
	for (j = 0; j < n - 1; j++) {  
        printf("%d ",input[j]);  
    }  
    printf("%d",input[n-1]);  
	return 0;
} 