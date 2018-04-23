#include<stdio.h> 
#include<string.h> 

int main(){

    int n;
    int year,month,day;
    int count = 0;  //��Ч�������
    char name[6], max_name[6], min_name[6];
    long long maxAge = 20140907, minAge = 18140905; 

    scanf("%d",&n);


    while(n-->0){

        scanf("%s %d/%d/%d",&name,&year,&month,&day);

        //��������Ƚ� 
        long long birth = year*10000+month*100+day; 

        //���˲���������
        if(birth < 18140906 || birth > 20140906);
        else{ //�õ����곤�����������
            count++;
            if(birth < maxAge){ //�õ����곤 
                strcpy(max_name,name);
                maxAge = birth; 
            }
            if(birth > minAge){ //�õ������� 
                strcpy(min_name,name);
                minAge = birth;
            }       
        } 
    }
    if(count)
        printf("%d %s %s\n",count,max_name,min_name); 
    else
        printf("0\n");
    return 0;
}