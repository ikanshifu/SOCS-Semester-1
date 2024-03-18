#include <stdio.h>
#include <string.h>

// Function to reverse a segment of the code
void reverseSegment(char *code, int start, int end) {
    while (start < end) {
        char temp = code[start];
        code[start] = code[end];
        code[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int Q;
        char code[1001];

        scanf("%d %s", &Q, code);

        for (int i = 0; i < Q; i++) {
            int start, end;
            scanf("%d %d", &start, &end);

            // Perform the reverse operation on the specified segment
            reverseSegment(code, start - 1, end - 1);
        }

        printf("Case #%d: %s\n", tc, code);
    }

    return 0;
}

