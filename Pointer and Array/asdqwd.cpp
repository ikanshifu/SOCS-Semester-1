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
       	int counter1=0;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int total = A[i] + A[j];
                for (int k = 0; k < N; k++) {
                    if (k != i && k != j && A[k] == total) {
                    	unique[k]=A[k];
                        counter++;
                        break;
                    }
                }
            }
        }

        printf("Case #%d: %d\n", tc, counter);
    }

    return 0;
}

