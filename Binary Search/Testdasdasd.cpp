#include <stdio.h>

int findLongestSegment(int N, int M, int A[]) {
    int maxLength = 0;
    int currentLength = 0;
    int currentSum = 0;

    for (int i = 0; i < N; ++i) {
        currentSum += A[i];
        currentLength++;

        while (currentSum > M) {
            currentSum -= A[i - currentLength + 1];
            currentLength--;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return (maxLength > 0) ? maxLength : -1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; ++testCase) {
        int N, M;
        scanf("%d %d", &N, &M);

        int A[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }

        int result = findLongestSegment(N, M, A);
        printf("Case #%d: %d\n", testCase, result);
    }

    return 0;
}
