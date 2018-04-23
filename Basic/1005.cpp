#include <stdio.h>
void do_cut(int);
int nums[100] = {0};
int tempt[100] = {0};
int t = 0;
   
int main(){
	int count,ansIndex = 0;
	int ans[100] = {0};
	scanf("%d",&count);
	for(int i=0;i<count;i++){
		scanf("%d",&nums[i]);
		for(int j=0;j<i;j++){
			if(nums[j]>nums[i]){
				int temp = nums[i];
				for(int k=i-1;k>=j;k--){
					nums[k+1] = nums[k];
				}
				nums[j] = temp;
				break;
			}
		}
	} 
	for(int i=0;i<count;i++){
		if(nums[i]==0)continue;
		t = 0;
		for(int j=0;j<count;j++)tempt[j]=0;
		
		do_cut(nums[i]);
		
		for(int k=0;tempt[k]!=0;k++){
			for(int z=0;z<count;z++){
				if(tempt[k]==nums[z]){
					nums[z]=0;
				}
			}
		}
	} 
	int flag = 0;
	for(int i=count-1;i>=0;i--){
		if(nums[i]!=0){
			if(flag){
				printf(" ");
			}else{
				flag = 1;
			}
			printf("%d",nums[i]);
		}
	}
	return 0;
}

void do_cut(int number){
	if(number<=1)return;
	else if(number%2==0){
		int te = number/2;
		if(te!=1)tempt[t++] = te;
		do_cut(te);
	}
	else if(number%2==1){
		int te = (3*number+1)/2;
		if(te!=1)tempt[t++] = te;
		do_cut(te);
	}
} 
