#include <stdio.h>

int main (){
	int N,M,Q,X,Y,A;
	scanf("%d %d %d", &N,&M,&Q);
	int number[N][M];
	int query[Q][3];
	for(int row = 0;row<N;row++){
		for(int col = 0;col<M;col++){
			number[row][col] = 0; 
		}
	}
	
	for(int i = 0; i<Q;i++){
		scanf("%d %d %d", &query[i][0], &query[i][1], &query[i][2]);
		X = query[i][0];
        Y = query[i][1];
        A = query[i][2];
        number[X][Y] = A;
	}
	
	for(int row = 0;row<N;row++){
		for(int col = 0;col<M;col++){
			printf("%d", number[row][col]);
			if(col<M-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
