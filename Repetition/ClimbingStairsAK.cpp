#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int A[1001];
	for(int i = 0; i<N;i++){
		scanf("%d", &A[i]);
	}
	
	for(int i = 0; i<N;i++){
		if(A[i]>=A[i+1]||i==N-1){
			printf("%d", A[i]);
			if(i<N-1){
				printf(" ");
			}
		}
	}
	printf("\n");
	return 0;
}
