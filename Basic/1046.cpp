#include <stdio.h>

int main(void){
	int count,a_shout,a_gesture,a_shots=0,b_shout,b_gesture,b_shots=0,add;
	scanf("%d",&count);
	while(count-->0){
		scanf("%d %d %d %d",&a_shout,&a_gesture,&b_shout,&b_gesture);
		add = a_shout+b_shout;
		if(a_gesture==add&&b_gesture==add){
			continue;
		}else if(a_gesture==add){
			b_shots++;
		}else if(b_gesture==add){
			a_shots++;
		}
	}
	printf("%d %d",a_shots,b_shots);
	return 0;
} 