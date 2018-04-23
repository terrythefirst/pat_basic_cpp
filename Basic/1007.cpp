#include <stdio.h>
#include <math.h>
int isPrime(int);

int main(){
	int num,prePrime=2,count=0;
	scanf("%d",&num);
	
	for(int i=3;i<=num;i++){
		if(isPrime(i)){
			int dp = i-prePrime;
			prePrime = i;
			if(dp==2)count++;
		}
	}
	printf("%d",count);
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
	return ans;
}
 
