#include <stdio.h>
#include <string.h>

int main(void){
	int broken_keys[178]={0};
	int i=0,check=0;
	char c;
	char input[100000];
	while((c =getchar())!= '\n'){
		broken_keys[c]=1;
		if(c>='A'&&c<='Z')broken_keys[c-'A'+'a']=1;
	}//+=43 A=65 Z=90 a=97 z=122
	if(broken_keys['+']!=0)
		for(i='A';i<='Z';i++)
			broken_keys[i]=1;	
	while((c =getchar())!= '\n'){
		if(broken_keys[c]==0)printf("%c",c);
		check = 1;
	}
	if(check==0)printf("\n");
	return 0;
}