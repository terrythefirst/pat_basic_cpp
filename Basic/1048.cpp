#include <stdio.h>

int main(void){
	char a[101]={0},b[101]={0};
	int alen=0,blen=0,i,max;
	char c;
	while((c=getchar())!=' '){
		a[alen++]=c;
	}
	while((c=getchar())!='\n'){
		b[blen++]=c;
	}
	if(alen>blen){
		max=alen;
	}else{
		max=blen;
	}
	for(i=0;i<max;i++){
		int temp,digit=max-i,avalue,bvalue;
		char c_temp;
		if(digit>alen){
			avalue=0;
		}else{
			avalue= a[alen-digit]-'0';
		}
		if(digit>blen){
			bvalue=0;
		}else{
			bvalue= b[blen-digit]-'0';
		}
		
		if(digit%2==0){
			temp = bvalue-avalue;
			if(temp<0){
				temp+=10;
			}
		}else{
			temp = avalue+bvalue;
			temp %= 13;
		}
		if(temp>9){
			switch(temp){
				case 10:
					c_temp = 'J';
					break;
				case 11:
					c_temp = 'Q';
					break;
				case 12:
					c_temp = 'K';
					break;
			}
		}else{
			c_temp = '0'+temp;
		}
		printf("%c",c_temp);
	}
	return 0;
} 