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
                // Check if A[i] + A[j] exists in the array
                for (int k = 0; k < N; k++) {
                    if (k != i && k != j && A[k] == A[i] + A[j]) {
                        printf(" %d", A[i] + A[j]);
                        coolFactor++;
                        break;  // Break to avoid counting the same number multiple times
                    }
                }
            }
        }

        printf(": %d\n", coolFactor);
    }

    return 0;
}

