#include <stdio.h>

int main(void){
	int a,b,plus,base,n=0,digits[100];
	scanf("%d%d%d",&a,&b,&base);
	plus = a+b;
	if(plus!=0){
		while(plus>0){
			digits[n++] = plus%base;
			plus/=base;
		}
		n--;
		while(n>=0){
			printf("%d",digits[n--]);
		}
	}else{
		printf("0");
	}
	
	return 0;
}