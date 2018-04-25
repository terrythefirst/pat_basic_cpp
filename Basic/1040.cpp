#include <stdio.h>

int main(void){
	int p_count=0,a_count=0,count = 0;
	char c;
	
	while((c=getchar())!='\n'){
		switch(c){
			case 'P':
				p_count++;
				break;
			case 'A':
				a_count= (a_count+p_count)%1000000007;
				break;
			case 'T':
				count= (count + a_count)%1000000007;	
				break;
		}
	}
	printf("%d\n",count);
	
	return 0;
} 