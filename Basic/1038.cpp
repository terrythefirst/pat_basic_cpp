#include <stdio.h>

int main(void){
	int n,m,score;
	int score_count[1000]={0};
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&score);
		score_count[score]++;
		n--;
	}
	scanf("%d",&m);
	while(m>0){
		scanf("%d",&score);
		printf("%d",score_count[score]);
		if(m!=1)
			printf(" ");
		m--;
	}
	return 0;
} 