#include <stdio.h>
#include <stdlib.h>
const char* toChinesePinyin(int);

int main(){
	
	char number[100];//= "1234567890987654321123456789";
	gets(number);
	int add = 0;
	int i=0;
	while(number[i]){
		char c = number[i++];
		add+=atoi(&c);
	}
	//printf("%d",add);
	int digits[5] = {
		0
	};
	int j=0;
	while(add){
		digits[j++]=add%10;
		add/=10;
	}
	int k=2;
	while(k>=0){
		if(digits[k]!=0||(digits[k+1]!=0)||k==0){
			printf("%s",toChinesePinyin(digits[k]));
			if(k!=0)printf(" ");		
		}	
		k--;
	}
} 
const char* toChinesePinyin(int digit){
	const char* zero = "ling";
	const char* one = "yi";
	const char* two = "er";
	const char* three = "san";
	const char* four = "si";
	const char* five = "wu";
	const char* six = "liu";
	const char* seven = "qi";
	const char* eight = "ba";
	const char* nine = "jiu";
	
	switch(digit){
		case 0:return zero;
		case 1:return one;
		case 2:return two;
		case 3:return three;
		case 4:return four;
		case 5:return five;
		case 6:return six;
		case 7:return seven;
		case 8:return eight;
		case 9:return nine;
		default:return "error";
	}
}