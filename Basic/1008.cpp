#include <stdio.h>

int main(){
	int a[101];
	int n,m;
	scanf("%d%d",&n,&m);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		int lastOne = a[n-1];
		for(int j=n-2;j>=0;j--){
			a[j+1]=a[j];
		}
		a[0] = lastOne;
	}
	for(int i=0;i<n;i++){
		if(i!=0)printf(" ");
		printf("%d",a[i]);
	}
	return 0;
}
