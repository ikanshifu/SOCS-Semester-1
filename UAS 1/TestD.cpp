#include <stdio.h>

void fraktal_A_helper(int x, int *count) {
    int i;
    for (i = 1; i <= x; i++) {
        printf("*");
        (*count)++;
    }
    printf("\n");
}

void fraktal_A(int x, int *count) {
    if (x <= 0) {
        return;
    } else {
        fraktal_A_helper(x, count);
        fraktal_A(x - 1, count);
    }
}

int main() {
    int X, count = 0;
    scanf("%d", &X);
    fraktal_A(X, &count);

    // Update count before printing to avoid integer overflow
    count = count % 1000000000;

    printf("%d\n", count);
    return 0;
}

