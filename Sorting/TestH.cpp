#include <stdio.h>
#include <string.h>

char text[205][205];

void descendingSort(char str[][205], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) < 0) {  // Changed the comparison for descending sort
                char temp[205];  // Updated the array size to match the input size
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}

void ascendingSort(char str[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {  // Changed the comparison for ascending sort
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    for (int i = 0; i < R; i++) {
        scanf("%s", text[i]);
    }

    for (int i = 0; i < R; i++) {
        ascendingSort(text[i], C);  // Fixed the size argument to C
    }

    descendingSort(text, R);

    for (int i = 0; i < R; i++) {
        printf("%s\n", text[i]);
    }

    return 0;
}

