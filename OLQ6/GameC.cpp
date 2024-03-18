#include <stdio.h>
#include <string.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char text[N + 1];
    scanf("%s", text);

    for (int i = 0; i < M; i++) {
        int query;
        scanf("%d", &query);

        if (query >= 0 && query < N) {
            char huruf = text[query];
            if (huruf >= 'a' && huruf <= 'z') {
                text[query] = huruf - 'a' + 'A'; 
            } else if (huruf >= 'A' && huruf <= 'Z') {
                text[query] = huruf - 'A' + 'a'; 
            }
        }
    }
    printf("%s\n", text);

    return 0;
}
