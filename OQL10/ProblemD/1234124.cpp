#include <stdio.h>
#include <string.h>

int main() {
    int T;
    FILE *fp = fopen("testdata.in", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fscanf(fp, "%d\n", &T);

    for (int tc = 1; tc <= T; tc++) {
        char X[102];
        int counter[26] = {0};
        int length = 0;

        fscanf(fp,"%s\n",X);
        length = strlen(X);

        int N, i, j;
        fscanf(fp, "%d\n", &N);

        char A, B;
        for (i = 0; i < N; i++) {
            fscanf(fp, "%c %c\n", &A, &B);
            for (j = 0; j < length; j++) {
                if (X[j] == A) {
                    X[j] = B;
                }
            }
        }

        for (i = 0; i < length; i++) {
            if (X[i] >= 'A' && X[i] <= 'Z') {
                counter[X[i] - 'A']++;
            }
        }

        for (i = 0; i < 26; i++) {
            if (counter[i] > 0) {
                printf("%c %d\n", 'A' + i, counter[i]);
            }
        }
    }

    fclose(fp);
    return 0;
}

