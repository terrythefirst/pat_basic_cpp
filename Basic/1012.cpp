/*
1012. 数字分类 (20)
时间限制
100 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入格式：

每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

输出格式：

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9
*/
#include <stdio.h>
#include <limits.h>

int main(){
	int n,a1,a2,a3,a4,a5;
	scanf("%d",&n);
	
	a1=0;//A1 = 能被5整除的数字中所有偶数的和；
	a2=0;//A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
	int a2apflag = 0;
	int a2flag = 1;
	a3=0;//A3 = 被5除后余2的数字的个数；
	a4=0;//A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
	int a4count = 0;
	a5=INT_MIN;//A5 = 被5除后余4的数字中最大数字。
	while(n>0){
		int tempt;
		scanf("%d",&tempt);
		if(tempt%5==0&&tempt%2==0){
			a1+=tempt;
		}else if(tempt%5==1){
			if(a2apflag==0)a2apflag =1;
			if(a2flag){
				a2+=tempt;
				a2flag = 0;
			}else{
				a2-=tempt;
				a2flag = 1;
			}
		}else if(tempt%5==2){
			a3++;
		}else if(tempt%5==3){
			a4+=tempt;
			a4count++;
		}else if(tempt%5==4){
			if(tempt>a5)a5 = tempt;
		}
		
		n--;
	}
	if(a1!=0){
		printf("%d ",a1);	
	}else{
		printf("N ");
	}
	if(a2apflag!=0){
		printf("%d ",a2);	
	}else{
		printf("N ");
	}
	if(a3!=0){
		printf("%d ",a3);	
	}else{
		printf("N ");
	}
	if(a4count!=0){
		printf("%.1f ",a4*1.0f/a4count);	
	}else{
		printf("N ");
	}
	if(a5!=INT_MIN){
		printf("%d",a5);	
	}else{
		printf("N");
	}
	
	
	return 0;
} 
