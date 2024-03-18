#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int A[N], incomplete=0,teams;
	for (int i = 1; i <= N; i++) {
		A[i] = 0;
	}
	for(int i = 1;i<=N;i++){
		for(int j = 1;j<=N;j++){
			scanf("%d",&teams);
			if(teams>0){
				A[teams]++;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
        if (A[i] < N){
            incomplete++;
        }
	}
	printf("%d\n",incomplete);
	return 0;
}
