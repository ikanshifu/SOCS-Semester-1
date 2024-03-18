#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc=1;tc<=T;tc++){
		int N,fail=0;
		scanf("%d",&N);
		long long X[N],Y[N];
		for(int i = 0; i<N;i++){
			scanf("%lld",&X[i]);
		}
		for(int i = 0; i<N;i++){
			scanf("%lld",&Y[i]);
		}
		for(int i = 0; i<N;i++){
			if(X[i]<Y[i]){
				fail++;
			}
		}
		printf("Case #%d: %d\n", tc,fail);
	}		
	return 0;
}
