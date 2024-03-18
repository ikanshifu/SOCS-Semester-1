#include <stdio.h>

int sum(int N){
	int A[N],total=0;
	for(int i = 0;i<N;i++){
		scanf("%d",&A[i]);
		total+=A[i];
	}
	return total;
}

int main(){
	int T;
	scanf("%d",&T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		int total = sum(N);
		printf("Case #%d: %d\n",tc,total);	
	}
	return 0;
}
