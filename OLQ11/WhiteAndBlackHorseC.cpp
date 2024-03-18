#include <stdio.h>
#include <stdlib.h>

int valid(int x, int y) {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

int simulation(int x1, int y1, int x2, int y2, int N) {
    if (x1 == x2 && y1 == y2) {
        return 1;
    }

    if (N == 0) {
        return 0;
    }

    int moveX[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int moveY[] = {1, 2, 2, 1, -1, -2, -2, -1};

    for (int i = 0; i < 8; i++) {
        int newX1 = x1 + moveX[i];
        int newY1 = y1 + moveY[i];

        for (int j = 0; j < 8; j++) {
            int newX2 = x2 + moveX[j];
            int newY2 = y2 + moveY[j];

            if (valid(newX1, newY1) && valid(newX2, newY2)) {
                if (simulation(newX1, newY1, newX2, newY2, N - 1)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);
        char black[3], white[3];
        scanf("%s %s", black, white);
        int x1 = black[0] - 'A' + 1;
        int y1 = black[1] - '0';
        int x2 = white[0] - 'A' + 1;
        int y2 = white[1] - '0';

        int meet = simulation(x1, y1, x2, y2, N);
        if(meet == 1){
        	printf("Case #%d: YES\n", tc);
		}else{
			printf("Case #%d: NO\n", tc);
		}
    }
 	return 0;
}
