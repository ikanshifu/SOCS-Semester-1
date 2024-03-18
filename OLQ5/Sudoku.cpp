#include <stdio.h>
#include <stdlib.h>

int checksudoku(int sudoku[9][9]) {

    for (int i = 0; i < 9; i++) {
        int row[9] = {0};
        int col[9] = {0};
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] < 1 || sudoku[i][j] > 9 || sudoku[j][i] < 1 || sudoku[j][i] > 9) {
                return 0;
            }
            if (row[sudoku[i][j] - 1] == 1 || col[sudoku[j][i] - 1] == 1) {
                return 0;
            }
            row[sudoku[i][j] - 1] = 1;
            col[sudoku[j][i] - 1] = 1;
        }
    }

    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            int innerCheck[9] = {0};
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    if (innerCheck[sudoku[i + x][j + y] - 1] == 1) {
                        return 0;
                    }
                    innerCheck[sudoku[i + x][j + y] - 1] = 1;
                }
            }
        }
    }

    return 1;
}

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

    int correctSudokus = 0;
    for (int t = 0; t < T; t++) {
        if (isValid[t]) {
            correctSudokus++;
        }
    }

    double totalAccuracy = (double)correctSudokus / T * 100;
    printf("Total Accuracy: %.2lf%%\n", totalAccuracy);

    free(isValid);
    return 0;
}
