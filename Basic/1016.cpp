#include <stdio.h>

int main(void){
	int A,DA,PA=0,B,DB,PB=0;
	scanf("%d%d%d%d",&A,&DA,&B,&DB);
	
	while(A>0){
		if((A%10)==DA){
			PA*=10;
			PA+=DA;
		}
		A/=10;
	}
	while(B>0){
		if((B%10)==DB){
			PB*=10;
			PB+=DB;
		}
		B/=10;
	}
	
	printf("%d",PA+PB);
	return 0;
}