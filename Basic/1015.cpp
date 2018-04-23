#include <stdio.h>
#include <stdlib.h>
enum stu_type{
	other=0,vlowhigh,vhigh,both
};
typedef struct stu{
	long number;
	short virtue_score;
	short talent_score;
	int total_score;
	stu_type type;
} student;
typedef struct no{
	student st;
	no* next;
} node;
int min_score,high_score;
void addNode(node*,node*);

int main(){
	int count,pass_count=0; 
	scanf("%d%d%d",&count,&min_score,&high_score);
	printf("%d %d %d\n",count,min_score,high_score);
	node* head =(node*)malloc(sizeof(node));
	while(count>0){
		node* tempt = (node*)malloc(sizeof(node));
		long number;
		short vs,ts;
		scanf("%ld%hd%hd",&number,&vs,&ts);
		
		if(vs>min_score&&vs>min_score){
			tempt->st.number = number;
			tempt->st.virtue_score = vs;
			tempt->st.talent_score = ts;
			tempt->st.total_score = vs+ts;
			if(vs>=high_score&&ts>=high_score){
				tempt->st.type = both;
			}else if(vs>high_score&&ts<high_score){
				tempt->st.type = vhigh;
			}else if(vs<high_score&&ts<high_score){
				if(vs>ts){
					tempt->st.type = vlowhigh;
				}else{
					tempt->st.type = other;
				}
			}
			
			addNode(head,tempt);
			pass_count++;
		}
		count--;
	}
	
	printf("%d\n",pass_count);
	
	head=head->next;	
	
	
	return 0;
}
void addNode(node* head,node* p){
	node* tempt = head->next;
	if(head->next==NULL){
		head->next = p;
	}else{
		while(tempt){
			if(p->st.type>tempt->st.type){
				p->next = tempt;
				head->next = p;
				break;
			}else if(p->st.type==tempt->st.type&&p->st.total_score>tempt->st.total_score){
				p->next = tempt;
				head->next = p;
				break;
			}else{
				head = head->next;
				tempt= tempt->next;
			}
		}
	}
}