#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N,M,max,cheapest;
	int candy;
	for(int tc = 1; tc<=T;tc++){
		max = 0;
		cheapest = 2345;
		scanf("%d %d",&N, &M);
		for(int i = 0; i<N;i++){
			scanf("%d", &candy);
			if(candy<cheapest){
				cheapest = candy;
			}
		}
		max = M/cheapest;
		printf("Case #%d: %d\n", tc, max);
	}
	return 0;
}
