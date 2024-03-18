#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N, M;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d %d", &N, &M);
		printf("Case #%d:\n",tc);
		for(int row = 1; row<=N;row++){
			for(int col = 1; col<=M;col++){
				if(col == 1||row == 1||col == M||row == N){
					printf("#");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
