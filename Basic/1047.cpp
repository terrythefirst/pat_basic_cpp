#include <stdio.h>

int main(void){
	int count,team,number,score,i,max_score=0,max_index=-1;
	int team_score[1001]={0};
	scanf("%d",&count);
	for(i=0;i<count;i++){
		scanf("%d-%d %d",&team,&number,&score);
		team_score[team] += score;
		if(team_score[team]>max_score){
			max_score = team_score[team];
			max_index = team;
		}
	}
	printf("%d %d",max_index,max_score);
	return 0;
}