#include <stdio.h>

int main(void){
	char c;
	char ch[26] = {0};
	int max_index=27,max_value=0;
	
	while((c=getchar())!='\n'){
		int tem = -1;
		if(c>='A'&&c<='Z'){
			tem = c-'A';
		}else if(c>='a'&&c<='z'){
			tem = c-'a';
		}
		if(tem!=-1){
			ch[tem]++;
			if(ch[tem]>max_value||(ch[tem]==max_value&&tem<max_index)){
				max_value = ch[tem];
				max_index = tem;
			}
		}
	}
	printf("%c %d",max_index+'a',max_value);
	return 0;
} 