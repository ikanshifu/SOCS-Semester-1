#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int coolFactor = 0;

        printf("Case #%d:", tc);

        // Nested loops to check all pairs of indices in the array
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                // Print the sum and increment coolFactor
                printf(" %d", A[i] + A[j]);
                coolFactor++;
            }
        }

        printf(": %d\n", coolFactor);
    }

    return 0;
}

