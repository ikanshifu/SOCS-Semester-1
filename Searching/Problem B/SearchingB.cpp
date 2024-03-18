#include <stdio.h>
#include <string.h>

typedef struct Sekolah{
    char nim[11];
    char nama[20 + 1];
} Student;

void linearSearch(Student murid[], int size, char matchNim[], int tc) {
    for (int i = 0; i < size; i++) {
        if (strcmp(murid[i].nim, matchNim) == 0) {
            printf("Case #%d: %s\n", tc, murid[i].nama);
            return;
        }
    }
    printf("Case #%d: N/A\n", tc);
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }
    int N;
    fscanf(fp, "%d\n", &N);
    Student murid[100];
    for (int i = 0; i < N; i++) {
        fscanf(fp, "%s %s\n", murid[i].nim, murid[i].nama);
    }
    int T;
    fscanf(fp, "%d\n", &T);
    for (int tc = 0; tc < T; tc++) {
        char matchNim[11];
        fscanf(fp, "%s\n", matchNim);
        linearSearch(murid, N, matchNim, tc + 1);
    }

    fclose(fp);
    return 0;
}

