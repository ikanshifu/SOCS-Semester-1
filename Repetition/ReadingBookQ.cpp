#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int N, X;
        scanf("%d %d", &N, &X);
    	int turns = 0, turnFront= 0,turnBack = 0;
		turnFront = (X - 2) / 2 + 1;
		turnBack = (N - X) / 2;
		if (X % 2 == 1 && N % 2 == 0) {
        	turnBack += 1;
    	}
		if(turnFront<turnBack){
			turns = turnFront;
		}else{
			turns = turnBack;
		}
    	if (X == 1 || X == N) {
        	turns = 0;
    	}
        printf("Case #%d: %d\n", tc, turns);
    }

    return 0;
}

