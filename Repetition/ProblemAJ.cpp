#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int A[N],total;
	for(int i = 1;i<=N;i++){
		scanf("%d", &A[i]);
		total = total + A[i];
	}
	printf("%d\n", total);
	return 0;
}
