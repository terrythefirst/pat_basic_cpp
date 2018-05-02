#include <stdio.h>

int main(void){
	char c;
	int P=0,A=0,T=0,e=0,s=0,t=0;
	while((c=getchar())!='\n'){
		switch(c){
			case 'P':
				P++;
				break;
			case 'A':
				A++;
				break;
			case 'T':
				T++;
				break;
			case 'e':
				e++;
				break;
			case 's':
				s++;
				break;
			case 't':
				t++;
				break;
		}
	}
	while(P!=0||A!=0||T!=0||e!=0||s!=0||t!=0){
		if(P!=0){
			printf("P");
			P--;
		}	
		if(A!=0){
			printf("A");
			A--;
		}
		if(T!=0){
			printf("T");
			T--;
		}
		if(e!=0){
			printf("e");
			e--;
		}
		if(s!=0){
			printf("s");
			s--;
		}	
		if(t!=0){
			printf("t");
			t--;
		}		
	}
	return 0;
} 