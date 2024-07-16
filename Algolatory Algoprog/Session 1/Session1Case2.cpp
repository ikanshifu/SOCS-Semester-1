#include<stdio.h>

int main(){
	int tc;
	scanf("%d",&tc);
	
	for(int k=1;k<=tc;k++){
		long long int n, x,y;
		scanf("%lld %lld %lld",&n,&x,&y);
		printf("Case #%d:\n",k);
		for(int i=1;i<=y;i++){
			double bunga = (n*x*0.8)/1200;
			n += bunga;
			printf("%lld %lld\n",i,n);
		}
	}
	
	return 0;
}
