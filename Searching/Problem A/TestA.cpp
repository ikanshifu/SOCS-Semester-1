#include <stdio.h>
#include <string.h>

typedef struct {
    char pendek[55];
    char panjang[55];
} Dictionary;

void linearSearch(Dictionary kalimat[], int size, char matchData[], int tc) {
    for (int i = 0; i < size; i++) {
        if (strcmp(kalimat[i].pendek, matchData) == 0) {
            printf("Case #%d: %s\n", tc, kalimat[i].panjang);
            return;
        }
    }
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }
    int T;
    fscanf(fp, "%d\n", &T);
    Dictionary kalimat[100];
    for (int i = 0; i < T; i++) {
        fscanf(fp, "%[^#]#%s\n", kalimat[i].pendek, kalimat[i].panjang);
    }
    int N;
    fscanf(fp, "%d\n", &N);
    for (int tc = 0; tc < N; tc++) {
        char matchData[105];
        fscanf(fp, "%[^\n]\n", matchData);
        linearSearch(kalimat, T, matchData, tc + 1);
    }

    fclose(fp);
    return 0;
}
