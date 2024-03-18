#include <stdio.h>

int findMax(long long N, long long M, long long A[]) {
    long long total, count, max = 0;

    for (int k = 0; k < N; k++) {
        total = 0;
        count = 0;

        for (int i = k; i < N; i++) {
            total += A[i];
            count++;

            if (total > M) {
                max = (count> max) ? count-1 : max;
                break;
            }
        }
    }

    return (max == 0) ? -1 : max;
}

int main() {
    int T;
    scanf("%d", &T);

    long long N, M;
    for (int tc = 1; tc <= T; tc++) {
        scanf("%lld %lld", &N, &M);
        long long A[N];

        for (int i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }

        long long max = findMax(N, M, A);
        printf("Case #%d: %lld\n", tc, max);
    }

    return 0;
}
