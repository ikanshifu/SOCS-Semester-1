#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    int A[100][100];
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            scanf("%d", &A[row][col]);
        }
    }
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N - 1; col++) {
            for (int chk = col + 1; chk < N; chk++) {
                if (A[row][col] == A[row][chk]) {
                    printf("Nay\n");
                    return 0;
                }
            }
        }
    }

    for (int col = 0; col < N; col++) {
        for (int row = 0; row < N - 1; row++) {
            for (int chk = row + 1; chk < N; chk++) {
                if (A[row][col] == A[chk][col]) {
                    printf("Nay\n");
                    return 0; 
                }
            }
        }
    }
    
    printf("Yay\n");
    return 0;
}
