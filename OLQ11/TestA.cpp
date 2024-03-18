#include <stdio.h>

long long find(long long M, long long low, long long high) {
    long long result = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long sum = (mid * (mid + 1) * (2 * mid + 1)) / 6;

        if (sum >= M) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        long long M;
        scanf("%lld", &M);

        long long result = find(M, 1, 2000000);

        printf("Case #%d: %lld\n", i, result);
    }

	return 0;
}
