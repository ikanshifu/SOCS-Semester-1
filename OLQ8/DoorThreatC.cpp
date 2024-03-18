#include <stdio.h>

int main (){
	int T;
	scanf("%d",&T);
	int N,M, available;
	for(int tc = 1; tc<=T; tc++){
		available=0;
		scanf("%d %d", &N, &M);
		int X[M],kamar[N+2];
		for(int i = 0; i<M;i++){
			scanf("%d", &X[i]);
		}
		for(int j = 0;j<N;j++){
			kamar[j] = j+1;
		}
		for(int i = 0;i<M;i++){
			for(int j = 0;j<N;j++){
				if(kamar[j]%X[i]==0){
					kamar[j] = kamar[j]*-1;
				}			
			}
		}
		printf("Case #%d:", tc);
		for(int j = 0; j<N;j++){
			if(kamar[j]>0){
				available = 1;
				printf(" %d",kamar[j]);
				}
			}
		if(available==0){
			printf(" No room left!");	
		}
		printf("\n");	
	}	
	return 0;
}
