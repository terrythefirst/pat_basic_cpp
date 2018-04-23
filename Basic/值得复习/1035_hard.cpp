/*
1035. ������鲢(25)
ʱ������
200 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����ά���ٿƵĶ��壺

���������ǵ����㷨����һ����������ݣ��𲽲��������������С�ÿ�������У��㷨������������ȡ��һԪ�أ���֮����������������ȷ��λ�á���˵���ֱ��ȫ��Ԫ������

�鲢����������µ������������Ƚ�ԭʼ���п���N��ֻ����1��Ԫ�ص����������У�Ȼ��ÿ�ε����鲢�������ڵ����������У�ֱ�����ֻʣ��1����������С�

�ָ���ԭʼ���к���ĳ�����㷨�������м����У������жϸ��㷨���������������㷨��

�����ʽ��

�����ڵ�һ�и���������N (<=100)�����һ�и���ԭʼ���е�N�����������һ�и�����ĳ�����㷨�������м����С�������������Ŀ���������������ּ��Կո�ָ���

�����ʽ��

�����ڵ�1���������Insertion Sort����ʾ�������򡢻�Merge Sort����ʾ�鲢����Ȼ���ڵ�2��������ø������㷨�ٵ���һ�ֵĽ�����С���Ŀ��֤ÿ����ԵĽ����Ψһ�ġ����ּ��Կո�ָ�������ĩ�����ж���ո�
��������1��
10
3 1 2 8 7 5 9 4 6 0
1 2 3 7 8 5 9 4 6 0
�������1��
Insertion Sort
1 2 3 5 7 8 9 4 6 0
��������2��
10
3 1 2 8 7 5 9 4 0 6
1 3 2 8 5 7 4 9 0 6
�������2��
Merge Sort
1 2 3 8 4 5 7 9 0 6
*/ 

#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void* b) {  
 return *((int *)a) - *((int *)b);  
}  
int main(void){
	int n,i,j;
	int input[101],during[101];
	scanf("%d",&n);
	for ( int i = 0; i < n; i ++ ) {
		scanf("%d", &input[i]);
	}
	for ( int i = 0; i < n; i ++ ) {
		scanf("%d", &during[i]);
	}
	for(i=0;i<n-1&&during[i]<=during[i+1];i++);
	for(j=i+1;j<n&&input[j]==during[j];j++);
	if(j==n){
		printf("Insertion Sort\n");
		qsort(input, i + 2, sizeof(int), cmp);  
	}else {
		printf("Merge Sort\n");
		int k = 1, flag = 1;
        while(flag) {
            flag = 0;
            for (i = 0; i < n; i++) {
                if (input[i] != during[i])
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < n / k; i++)
                qsort(input + i * k, (i + 1) * k-i*k,sizeof(int),cmp);
            qsort(input + n / k * k, n-n/k*k,sizeof(int),cmp);
        } 
	}
	for (j = 0; j < n - 1; j++) {  
        printf("%d ",input[j]);  
    }  
    printf("%d",input[n-1]);  
	return 0;
} 