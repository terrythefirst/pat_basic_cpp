#include <stdio.h>

int main(void){
	int p_galleon,p_sickle,p_knut;
	int a_galleon,a_sickle,a_knut;
	scanf("%d.%d.%d %d.%d.%d",&p_galleon,&p_sickle,&p_knut,&a_galleon,&a_sickle,&a_knut);
	p_knut += (p_galleon*17+p_sickle)*29;
	a_knut += (a_galleon*17+a_sickle)*29;
	if(p_knut>a_knut){
		printf("-");
		int tempt = p_knut;
		p_knut = a_knut;
		a_knut = tempt;
	}
	int d_knut = a_knut-p_knut;
	printf("%d.",d_knut/(17*29));
	d_knut %= (17*29);
	printf("%d.",d_knut/29);
	d_knut %= 29;
	printf("%d",d_knut);
	
	return 0;
} 