#include <stdio.h>
#include <string.h>

typedef struct {
    char pendek[55];
    char panjang[55];
} Dictionary;

void translate(Dictionary kalimat[], int size, char matchData[]) {
    char *token = strtok(matchData, " ");
    while (token != NULL) {
    	int found = 0;
        for (int i = 0; i < size; ++i) {
            if (strcmp(token, kalimat[i].pendek) == 0) {
                printf("%s", kalimat[i].panjang);
                found = 1;
                break;
            }
        }
      	//jika kata tersebut sudah panjang, maka tidak perlu diubah
        if (!found && token != NULL && strchr(token, '#') == NULL) {
            printf("%s", token);
        }
        token = strtok(NULL, " ");
        if (token != NULL) {
            printf(" ");
        }
    }
    printf("\n");
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
    char matchData[N][105];
 	for (int tc = 0; tc < N; tc++) {
        fscanf(fp, " %[^\n]s", matchData[tc]);
    }
    for (int tc = 0; tc < N; tc++) {
        printf("Case #%d:\n", tc+1);
        translate(kalimat, T, matchData[tc]);
    }
	fclose(fp);
    return 0;
}

