#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);


	for(int i = 1;i<=T; i++){
		int N;
		scanf("%d", &N);
		int A[N],B[N],sum[N];;
		for(int x = 0;x<N;x++){
			sum[x] = 0;
			}
		for(int x = 0;x<N;x++){
			scanf("%d",&A[x]);
			}
		for(int x = 0;x<N;x++){
			scanf("%d",&B[x]);
			}
			printf("Case #%d:",i);
		for (int i = 0; i < N; i++) {
            sum[i] = A[i] - B[i];
			printf(" %d", sum[i]);
        }
		printf("\n");
		}
	return 0;
}
