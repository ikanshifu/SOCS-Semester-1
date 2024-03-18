#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int X = 1; X<=T;X++){
     	int A, B;
        scanf("%d %d", &A, &B);
        int total = A;
        while(A>=B){
        	int exchange = A/B;
        	total = total + exchange;
        	A = exchange + (A%B);
		}
        printf("Case #%d: %d\n", X, total);
    }

    return 0;
}

