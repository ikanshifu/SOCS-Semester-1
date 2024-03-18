#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		for(int i = 1; i<=N;i++){
			for(int j = 1; j<=N;j++){
				if( i == 1 || i == N ||j == 1 || j == N ||i == j || j == (N - i + 1)){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
