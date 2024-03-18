#include <stdio.h>
#include <string.h>

struct Plant {
    int M;
    char R[45];
} info[1000];

void swap(struct Plant *a, struct Plant *b) {
    struct Plant temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int low, int high) {
    int pivotIdx = high;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (strcmp(info[j].R, info[pivotIdx].R) < 0) {
            i++;
            swap(&info[i], &info[j]);
        }
    }
    i++;
    swap(&info[i], &info[pivotIdx]);
    return i;
}

void quickSort(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

int main() {
	FILE *fp = fopen("testdata.in", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }
    int N;
    fscanf(fp,"%d\n", &N);
    for (int i = 0; i < N; i++) {
        fscanf(fp,"%d#%[^\n]\n", &info[i].M, &info[i].R);
    }
    quickSort(0, N - 1);
    for (int i = 0; i < N; i++) {
        printf("%d %s\n",info[i].M, info[i].R);
    }
    return 0;
}

