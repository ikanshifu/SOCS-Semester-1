#include <stdio.h>
#include <string.h>

// Function to check if a character is a consonant
int isConsonant(char ch) {
    return !(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

// Function to find the nearest previous vowel and calculate the key
int findKey(char ch) {
    int key = 0;
    while (isConsonant(ch)) {
        ch--;
        key++;
    }
    return key;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        char message[101];
        scanf("%s", message);

        int length = strlen(message);

        // Process the message and calculate the key
        for (int i = 0; i < length; i++) {
            int key = 0;

            if (isConsonant(message[i])) {
                key = findKey(message[i]);
                message[i] -= key;
       		}
            printf("%c", message[i]);
        }

        printf("\n");

        // Print the key
        for (int i = 0; i < length; i++) {
            if (isConsonant(message[i])) {
                int key = findKey(message[i]);
                printf("%d", key);
            }
        }

        printf("\n");
    }

    return 0;
}

