#include <stdio.h>
#include <string.h>

struct Rank {
    char nama[15];
    int nilai;
} kelas[1000];

void swap(struct Rank *a, struct Rank *b) {
    struct Rank temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int low, int high) {
    int pivotIdx = high;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (kelas[j].nilai > kelas[pivotIdx].nilai || 
            (kelas[j].nilai == kelas[pivotIdx].nilai && strcmp(kelas[j].nama, kelas[pivotIdx].nama) < 0)) {
            i++;
            swap(&kelas[i], &kelas[j]);
        }
    }
    i++;
    swap(&kelas[i], &kelas[pivotIdx]);
    return i;
}

void quickSort(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);

        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

int linearSearch(struct Rank kelas[], int size, char search[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(kelas[i].nama, search) == 0) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++) {
        int N;
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf("%[^#]#%d", &kelas[i].nama, &kelas[i].nilai);getchar();
        }
        char search[15];
        scanf("%s", search);getchar();
        quickSort(0, N - 1);
        int position = linearSearch(kelas, N, search);
        printf("Case #%d: %d\n", tc + 1, position);
    }
    return 0;
}

