#include <stdio.h>

typedef struct {
    char char_value;
    int count;
} CharCount;

void jojo_game(char *X, int N, char processes[][3]) {
    CharCount char_count[26] = {0}; // Assuming only uppercase letters

    // Initialize char_count array with counts from the initial string
    for (int i = 0; X[i] != '\0'; i++) {
        if (X[i] >= 'A' && X[i] <= 'Z') {
            char_count[X[i] - 'A'].char_value = X[i];
            char_count[X[i] - 'A'].count++;
        }
    }

    // Perform the processes
    for (int i = 0; i < N; i++) {
        char A = processes[i][0];
        char B = processes[i][2];
        char_count[B - 'A'].count += char_count[A - 'A'].count;
        char_count[A - 'A'].count = 0;
    }

    // Print the result in alphabetical order
    for (int i = 0; i < 26; i++) {
        if (char_count[i].count > 0) {
            printf("%c %d\n", char_count[i].char_value, char_count[i].count);
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        char X[101];
        scanf("%s", X);

        int N;
        scanf("%d", &N);

        char processes[N][3];
        for (int i = 0; i < N; i++) {
            scanf("%s", processes[i]);
        }

        jojo_game(X, N, processes);
    }

    return 0;
}

