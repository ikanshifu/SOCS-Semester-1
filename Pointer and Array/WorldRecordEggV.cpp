#include <stdio.h>

long long calculateLikes(int day) {
    if (day == 1) {
        return 0;
    } else if (day == 2) {
        return 1;
    } else {
        long long likes[day + 1];
        likes[1] = 0;
        likes[2] = 1;

        for (int i = 3; i <= day; i++) {
            likes[i] = likes[i - 1] + likes[i - 2];
        }

        return likes[day];
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int day;
        scanf("%d", &day);
        long long likes = calculateLikes(day);
        printf("Case #%d: %lld\n", tc, likes);
    }

    return 0;
}

