#include <stdio.h>

int main (){
	int N;
	scanf("%d",&N);
	char line[N+1][N+1];
	for(int i = 0; i<N;i++){
		scanf("%s",line[i]);	
	} 	
	
	for(int i = N-1;i>=0;i--){
		for(int j = N-1;j>=0;j--){
			printf("%c", line[i][j]);
		}
		printf("\n");
	}
	return 0;
}
