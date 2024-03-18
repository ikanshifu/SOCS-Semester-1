#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N,M,max,curr_max;
	for(int tc = 1; tc<=T;tc++){
		max = 0;
		scanf("%d %d",&N, &M);
		int candy[N];
		for(int i = 0; i<N;i++){
			scanf("%d", &candy[i]);
		}
		for(int i = 0; i<N;i++){
			if(candy[i]<=M){
				curr_max = M/candy[i];
				if(curr_max > max){
					max = curr_max;
				}
			}
		}
		printf("Case #%d: %d\n", tc, max);
	}
	return 0;
}
