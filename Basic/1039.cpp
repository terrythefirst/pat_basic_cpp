#include <stdio.h>

int main(void){
	int shop[300]={0},want[300]={0},i,count_pos=0,count_neg=0;
	char c;
	while((c=getchar())!='\n'){
		shop[c]++;
	}
	while((c=getchar())!='\n'){
		shop[c]--;
	}
	for(i=0;i<300;i++)
		if(shop[i]>0)count_pos+=shop[i];
		else if(shop[i]<0)count_neg+=shop[i];
	if(count_neg <0)
		printf("No %d",-count_neg);
	else
		printf("Yes %d",count_pos);
	return 0;
}