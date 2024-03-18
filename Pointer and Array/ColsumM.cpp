#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1; tc<=T;tc++){
		int N;
		scanf("%d",&N);
		long long arr[N][N];
		long long total[N];
		
		for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                scanf("%lld", &arr[row][col]);
            }
        }
		
		for(int col = 0;col<N;col++){
			total[col]=0;
			for(int row = 0;row<N;row++){
				total[col] =arr[row][col] + total[col];
			}
		}
		
		printf("Case #%d:",tc);
		for(int col = 0;col<N;col++){
			printf(" %lld",total[col]);
		}
		printf("\n");
	}
	return 0;
}
