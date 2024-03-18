#include<stdio.h>

long long findMinimum(long long M, long long low, long long high){
    long long minimum=0;
    while (low <= high) {
        long long mid = (low+high) / 2;
        long long sum = (mid * (mid + 1) * (2 * mid + 1)) / 6;
        if (sum >= M) {
            minimum = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return minimum;
}

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        long long M, N;
        scanf("%lld", &M);
        N = findMinimum(M,0,2000000);
        printf("Case #%d: %lld\n", tc, N);
    }
    return 0;
}

