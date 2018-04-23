#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char a[2000];
	int b,n,flag=0,tempt=0;
	scanf("%s",a);
	n = strlen(a);
	scanf("%d",&b);
	
	for(int i=0;i<n;i++){
		tempt=(a[i]-'0')+tempt*10;
		if(tempt>=b){
			printf("%d",tempt/b);
			flag=1;
		}else if(flag==1){
			printf("0");
		}
		tempt%=b;
	}
	if(flag==0)
		printf("0");
	printf(" %d",tempt);
	
	return 0;
}