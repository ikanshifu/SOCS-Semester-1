#include <stdio.h>

#define MOD 1000000007

int factorial(int N) {
    if (N == 0 || N == 1) {
        return 1;
    } else {
        long long result = 1;
        for (int i = 2; i <= N; i++) {
            result = (result * i) % MOD;
        }
        return result;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);

        long long hasil = 1;
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            hasil = (hasil * factorial(num)) % MOD;
        }

        printf("Case #%d: %lld\n", tc, hasil);
    }

    return 0;
}

