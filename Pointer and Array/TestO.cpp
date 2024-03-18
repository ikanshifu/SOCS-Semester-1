#include <stdio.h>

#define MAX_N 100

int main() {
    int N;
    scanf("%d", &N);

    int matrix[MAX_N][MAX_N];

    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check each row for duplicates
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    printf("Nay\n");
                    return 0; // Matrix contains a same number on the same row
                }
            }
        }
    }

    // Check each column for duplicates
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N - 1; i++) {
            for (int k = i + 1; k < N; k++) {
                if (matrix[i][j] == matrix[k][j]) {
                    printf("Nay\n");
                    return 0; // Matrix contains a same number on the same column
                }
            }
        }
    }

    // If no duplicates are found, print "Yay"
    printf("Yay\n");

    return 0;
}

