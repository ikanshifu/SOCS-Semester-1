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
        int counter = 0;
        int unique[N];
        for (int i = 0; i < N; i++) {
            unique[i] = 0;
            for (int j = 0; j < N; j++) {
                if (i != j) {
                    for (int k = j + 1; k < N; k++) {
                        if (i != k && A[i] == A[j] + A[k]) {
                            unique[i] = 1;
                            break;
                        }
                    }
                    if (unique[i]) {
                        break;
                    }
                }
            }
            counter = counter + unique[i];
        }
        printf("Case #%d: %d\n", tc, counter);
    }
    return 0;
}

