#include <stdio.h>
#include <stdbool.h>

int papan[8][8] = {0};
int huruf[8] = {2, 2, 1, -1, -2, -2, -1, 1};
int angka[8] = {1, -1, -2, -2, 1, -1, 2, 2};

int absoluteValue(int i) {
    if (i < 0) {
        i *= -1;
    }
    return i;
}

int minimum = 0;

typedef struct {
    int letter;
    int number;
} Position;

void movement(int hurufSekarang, int angkaSekarang, int letter, int number) {
    Position queue[64];
    int front = 0, rear = 0;
    queue[rear++] = (Position){hurufSekarang, angkaSekarang};

    while (front < rear) {
        Position current = queue[front++];
        int currentLetter = current.letter;//nampung huruf dari yang di scan
        int currentNumber = current.number;//nampung angka dari yang di scan

        if (currentLetter == letter && currentNumber == number) {
            break;
        }

        for (int i = 0; i < 8; i++) {
            int newLetter = currentLetter + huruf[i];
            int newNumber = currentNumber + angka[i];

            if (newLetter >= 0 && newLetter < 8 && newNumber >= 0 && newNumber < 8 &&
                papan[newLetter][newNumber] == 0) {
                papan[newLetter][newNumber] = papan[currentLetter][currentNumber] + 1;
                queue[rear++] = (Position){newLetter, newNumber};
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);getchar();
    for (int tc = 1; tc <= T; tc++) {
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                papan[row][col] = 0;
            }
        }
        char hurufSekarang, hurufTarget;
        int angkaSekarang, angkaTarget;
        scanf("%c%d %c%d", &hurufSekarang, &angkaSekarang, &hurufTarget, &angkaTarget);getchar();
        hurufSekarang = hurufSekarang -'A';
        angkaSekarang = angkaSekarang - 1;
        hurufTarget = hurufTarget - 'A';
        angkaTarget = angkaTarget - 1;
        minimum = 0;
        movement(hurufSekarang, angkaSekarang, hurufTarget, angkaTarget);
        printf("Case #%d: %d\n", tc, papan[hurufTarget][angkaTarget]);
    }

    return 0;
}

