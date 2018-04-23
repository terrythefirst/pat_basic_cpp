#include <stdio.h>

int main(){
	int ans[10];
	int n;
	long long a,b,c;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a+b>c)ans[i]=1;
		else ans[i]=0;
	}
	for(int i=0;i<n;i++)
		if(ans[i])
			printf("Case #%d: true\n",i+1);
		else 
			printf("Case #%d: false\n",i+1);
	
	return 0;
} 