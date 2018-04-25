#include <stdio.h>
typedef struct stu{
	long long no;
	int seat;
}student;

int main(void){
	int count,late,i;
	scanf("%d",&count);
	student st[1001];
	while(count-->0){
		long long tempt_no;
		int tempt_seat;
		scanf("%lld %d %d",&tempt_no,&i,&tempt_seat);
		st[i].no = tempt_no;
		st[i].seat = tempt_seat;
	}
	scanf("%d",&late);
	while(late-->0){
		scanf("%d",&i);
		printf("%lld %d\n",st[i].no,st[i].seat);
	}
	return 0;
}