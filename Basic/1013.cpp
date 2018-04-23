#include <stdio.h>
#include <math.h>
int isPrime(int);

int main(){
	int m,n,preCount = 0,i=2;
	scanf("%d%d",&m,&n);
	
	while(preCount<n){
		if(isPrime(i)){
			preCount++;
			if(preCount>=m&&preCount<=n){
				if((preCount-m)!=0)
					if((preCount-m)%10==0)printf("\n");
					else {
						
							printf(" ");
					}
				printf("%d",i);
			}
		}
		i++;
	}
	
	return 0;
}
int isPrime(int n){
	int ans=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ans=0;
			break;
		}
	}
	if(n<2)ans=0;
	return ans;
}
 