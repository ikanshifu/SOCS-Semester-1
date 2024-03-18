#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        char S[1001];
        long long length = 0, flag = 0;
        scanf("%s", S);
        length = strlen(S);

        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {  // Start from i + 1 to avoid self-comparison
                if (S[i] == S[j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                break;  // No need to continue checking if a repeated character is found
            }
        }

        printf("Case #%d: ", tc);
        if (flag == 1) {
            printf("Ewwww");
        } else {
            printf("Yay");
        }
        printf("\n");
    }

    return 0;
}

