/*
1003. ��Ҫͨ����(20)
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����

���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�

�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO

*/




#include <stdio.h>
#include <string.h>

int main(){
	int count;
	char strs[11][101];
	int len[11];
	int p_position,t_position,p_count,t_count,a_count,other_count;
	scanf("%d",&count);
	getchar();

	int i=0;
	while(i<count){
		gets(strs[i]);
		len[i]=strlen(strs[i]);
		i++;
	}
	
	for(int i=0;i<count;i++){
		p_position = 0;
		t_position = 0;
		p_count = 0;
		t_count = 0;
		a_count = 0;
		other_count = 0;
		for(int j=0;j<len[i];j++){
			if(strs[i][j]=='P'){
				p_count++;
				p_position = j;
			}else if(strs[i][j]=='T'){
				t_count++;
				t_position = j;
			}else if(strs[i][j]=='A'){
				a_count++;
			}else {
				other_count++;
			}
		}
		if((p_position*(t_position-p_position-1)!=(len[i]-t_position-1))||other_count!=0||a_count==0||p_count>1||t_count>1)
			printf("NO\n");	
		else
			printf("YES\n");
	}
	
	return 0;
} 
