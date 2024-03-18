#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int C[N];
	for(int i = 0; i<N;i++){
		scanf("%d", &C[i]);
	}
	
	int Q;
	scanf("%d",&Q);
	for(int tc = 1; tc<=Q;tc++){
		int A,B;
		scanf("%d %d", &A,&B);
		printf("Case #%d:", tc);
		for(int i = 0; i<N;i++){
			if(i+1 == A){
				C[i] = B;
			}
			printf(" %d",C[i]);
		}
		printf("\n");
	}
	
	return 0;
}
