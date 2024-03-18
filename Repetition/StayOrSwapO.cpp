#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N,M,K,X;
	for(int tc = 1; tc<=T; tc++){
		scanf("%d %d %d", &N, &M, &K);
		for(int i = 0;i<N;i++){
			scanf("%d",&X);
			if(X<=M){		
				if(X>K){
			 		K = X;
				}
			}
		}
		printf("Case #%d: %d\n", tc, K);
	}
	return 0;
}
