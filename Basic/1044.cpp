#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
    char low[13][5]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char up[13][5]={" ","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    char temp[10];
    int temp1;
    int n;
    scanf("%d",&n);
    getchar(); 
    for(int i=0;i<n;i++){
        gets(temp);
        if(temp[0]>='0'&&temp[0]<='9'){
            int a = atoi(temp);
            if(a/13!=0){
                if(a%13){
                    printf("%s ",up[a/13]);
                    printf("%s\n",low[a%13]);
                }
                else
                    printf("%s\n",up[a/13]);
            }
            else    
                printf("%s\n",low[a%13]);
        }    
        else{
            temp1 = 0;
            char *result = strtok(temp," "); 
            for(int j=0;j<13;j++){
                if(strcmp(up[j],result)==0){
                    temp1 = temp1+j*13;
                }
            }
            for(int j=0;j<13;j++){
                if(strcmp(low[j],result)==0){
                    temp1 = temp1+j;
                }
            }
            result = strtok(NULL," ");
            if(result!=NULL){
                for(int j=0;j<13;j++){
                    if(strcmp(low[j],result)==0){
                        temp1 = temp1+j;
                    }
                }
            }
            printf("%d\n",temp1);
        }
        
    } 
}