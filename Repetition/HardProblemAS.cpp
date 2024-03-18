#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N,counter,score;
	char S[101], K[101];
	for(int tc = 1; tc<=T;tc++){
		score = 0;
		scanf("%d",&N);getchar();
		counter = 0;
		scanf("%[^\n]",&S);getchar();
		scanf("%[^\n]",&K);getchar();
		for(int i = 0; i<N; i++){
			if(S[i]==K[i]){
				counter++;
			}
		}
		score = 100*counter/N;
		printf("Case #%d: %d\n", tc, score);
	}
	return 0;
}
