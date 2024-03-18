#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		long long M,N;
		scanf("%lld",&M);
		N=0;
		while(N*(N+1)*((2*N)+1)/6<M){
			N++;	
		}
		printf("Case #%d: %lld\n", tc,N);
	}	
	return 0;
}
	
