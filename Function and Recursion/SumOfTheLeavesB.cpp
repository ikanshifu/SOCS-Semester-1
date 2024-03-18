#include <stdio.h>

void calculate(int N,int A[],int subtree,int sum){
	if(subtree<N){
		sum = sum + A[subtree];
		if(2 * subtree + 1 >= N && 2 * subtree + 2 >= N){
			printf("%d\n", sum);
		}else{
			calculate(N,A,subtree*2+1,sum);
			calculate(N,A,subtree*2+2,sum);
		}
	}
}

int main(){
	int T;
	scanf("%d",&T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		int A[N];
		for(int i = 0;i<N;i++){
			scanf("%d",&A[i]);
		}
		printf("Case #%d:\n",tc);
		calculate(N,A,0,0);
	}
	
	return 0;
}
