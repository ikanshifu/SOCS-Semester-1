#include <stdio.h>
#include <string.h>

int characterChecker(char character) {
    return !(character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');
}

int calculateDistance(char character) {
    int vowlDistance = 0;
    while (characterChecker(character)) {
        character--;
        vowlDistance++;
    }
    return vowlDistance;
}

int main() {
    int T;
    scanf("%d", &T);
    getchar();

    for (int tc = 1; tc <= T; tc++) {
        char message[1002];
        char distance[1002];
        int length, vowlDistance;

        scanf("%s", message);
        length = strlen(message);

        printf("Case #%d:\n", tc);

        for (int i = 0; i < length; i++) {
            vowlDistance = 0;
            if (characterChecker(message[i])) {
                vowlDistance = calculateDistance(message[i]);
                message[i] = message[i] - vowlDistance;
                distance[i] = '0' + vowlDistance;
            } else {
                distance[i] = '0';
            }
        }

        printf("%s\n", message);

        for (int i = 0; i < length; i++) {
            printf("%c", distance[i]);
        }

        printf("\n");
    }

    return 0;
}

