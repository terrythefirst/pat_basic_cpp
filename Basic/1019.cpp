#include <stdio.h>
#include <stdlib.h>
int asc_sort(const void*a,const void*b)//用来做比较的函数。  
{   
     return *(int*)b-*(int*)a; 
}  
int desc_sort(const void*a,const void*b)//用来做比较的函数。  
{  
    return *(int*)a-*(int*)b; 
}  
void int_to_digits(int digits[4],int n){
	digits[0] = n/1000;
	n%=1000;
	digits[1] = n/100;
	n%=100;
	digits[2] = n/10;
	n%=10;
	digits[3] = n;
}
void digits_to_int(int digits[4],int* n){
	*n=0;
	*n+=digits[0]*1000;
	*n+=digits[1]*100;
	*n+=digits[2]*10;
	*n+=digits[3];
}
int do_loop (int n){
	int digits[4],asc,desc,ans;
	int_to_digits(digits,n);
	qsort(digits,4,sizeof(int),asc_sort);
	digits_to_int(digits,&asc);
	qsort(digits,4,sizeof(int),desc_sort);
	digits_to_int(digits,&desc);
	ans = asc-desc;
	printf("%04d - %04d = %04d\n",asc,desc,ans);
	return ans;
}

int main(void){
	int n;
	scanf("%d",&n);
	do{
		n=do_loop(n);
	}while(n!=6174&&n!=0);

	return 0;
}