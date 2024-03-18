#include <stdio.h>

void multiply(int N, int matrix1[][50], int matrix2[][50], int hasil[][50]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < N; k++) {
                hasil[i][j] = hasil[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
}

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		int N;
		scanf("%d",&N);
		int matrixA[50][50],matrixB[50][50],matrixC[50][50],hasil[50][50],hasilFinal[50][50];
		for(int row = 0;row<N;row++){
			for(int col = 0;col<N;col++){
				scanf("%d", &matrixA[row][col]);
			}
		}
		getchar();
		for(int row = 0;row<N;row++){
			for(int col = 0;col<N;col++){
				scanf("%d", &matrixB[row][col]);
			}
		}
		getchar();
		for(int row = 0;row<N;row++){
			for(int col = 0;col<N;col++){
				scanf("%d", &matrixC[row][col]);
			}
		}
		multiply(N, matrixA, matrixB, hasil);
        multiply(N, hasil, matrixC, hasilFinal);
        
		printf("Case #%d:\n",tc);
		for(int row = 0;row<N;row++){
			for(int col = 0;col<N;col++){
				printf("%d", hasilFinal[row][col]);
				if(col<N-1){
					printf(" ");
				}
			}
			printf("\n");
		}
	}
    return 0;
}
