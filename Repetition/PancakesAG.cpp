#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int x = 1; x<=T;x++){
		int N;
		scanf("%d", &N);
		printf("Case %d: ",x);
		for(int i=0;i<=N-1;i++){
			long long pieces;
			pieces = ((i*(i+1)/2)+1);
			//cara 2->pieces = i + pieces;
			printf(" %lld", pieces);
		}
		printf("\n");
	}
	return 0;
}
