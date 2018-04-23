/*#include <stdio.h>
#include <string.h>

int main(){
	char string_line[81];
	char* s_p = string_line;
	char s_array[81][81];
	int count=0,len,preIndex=0;
	gets(string_line);
	len = strlen(string_line);
	
	for(int i=0;i<len;i++){
		if(string_line[i]==' '){
			strncpy(s_array[count++],s_p,i-preIndex);
			s_p=&string_line[i+1];
			preIndex = i+1;
		}		
	}
	if(preIndex!=len)
		strncpy(s_array[count++],s_p,len-preIndex);
	for(int i=count-1;i>=0;i--){
		if(i!=count-1)printf(" ");
		printf("%s",s_array[i]);
	}
		
	return 0;
} */

#include <stdio.h>  
#include <string.h>  
void output(char *str)  
{  
  char* tail = strchr(str,' ');  
  if (tail == NULL)  
    printf("%s",str);  
  else  
    {  
      output(tail + 1);  
      *tail = '\0';  
      printf(" %s",str);  
    }  
}  
int main()  
{  
  char str[81];  
  gets(str);  
  output(str);  
  putchar('\n');  
  return 0;  
}  