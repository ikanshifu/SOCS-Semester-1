#include <stdio.h>


int main() {
    int T;
    scanf("%d", &T);

    int* isValid = (int*)malloc(T * sizeof(int));

    for (int t = 0; t < T; t++) {
        int sudoku[9][9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }

        isValid[t] = checksudoku(sudoku);
    }

    for (int t = 0; t < T; t++) {
        printf("Case #%d: %s\n", t + 1, (isValid[t] ? "TRUE" : "FALSE"));
    }

    double success = 0;
    for (int t = 0; t < T; t++) {
        if (isValid[t]) {
            success++;
        }
    }

    double accuracy = success / T * 100;
    printf("%.2lf%%\n", accuracy);

    free(isValid);
    return 0;
}
