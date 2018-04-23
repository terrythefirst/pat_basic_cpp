#include <stdio.h>

int main(){
	int n,i;
	int digits[3];
	scanf("%d",&n);
	
	i=0;
	while(n>0){
		digits[i++] = n%10;
		n/=10;
	}
	i--;
	
	while(i>=0){
		int num = digits[i];
		if(i==2){
			for(int j=0;j<num;j++){
				printf("B");
			}
		}else if(i==1){
			for(int j=0;j<num;j++){
				printf("S");
			}
		}else if(i==0){
			for(int j=1;j<=num;j++){
				printf("%d",j);
			}
		}
		i--;
	}
	return 0;
} 