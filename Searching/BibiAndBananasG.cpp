#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        long long N, K;
        //N = banyak pisang di kulkas
        //K = berat minimum pisang yang ingin dimakan
        scanf("%lld %lld", &N, &K);
        long long counter = 0;
        for (int i = 0; i < N; i++) {
            int A[N];
            //A = berat masing-masing pisang
            scanf("%d", &A[i]);
            if (A[i] >= K) {
                counter++;
            }
        }
        printf("Case #%d: %lld\n", tc, counter);
    }

    return 0;
}

