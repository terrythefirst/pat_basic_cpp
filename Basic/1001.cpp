#include <stdio.h>
int do_cut(int,int);

int main(){
	int number;
	scanf("%d",&number);
	printf("%d\n",do_cut(number,0));
	
	return 0;
}

int do_cut(int number,int count){
	if(number<=1)return count;
	else if(number%2==0)return do_cut(number/2,++count); 
	else if(number%2==1)return do_cut((3*number+1)/2,++count);
} 