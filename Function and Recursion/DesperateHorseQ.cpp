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

typedef struct {
    int letter;
    int number;
} Posisi;

void movement(int hurufSekarang, int angkaSekarang, int hurufTarget, int angkaTarget) {
    Posisi queue[64];
    int front = 0, rear = 0;
    queue[rear++] = (Posisi){hurufSekarang, angkaSekarang};

    while (front < rear) {
        Posisi current = queue[front++];
        int hurufLama = current.letter;//nampung huruf dari yang di scan
        int angkaLama = current.number;//nampung angka dari yang di scan

        if (hurufLama == hurufTarget && angkaLama == angkaTarget) {
            break;
        }//seandainya kedua kuda sudah bertemu maka permaianan di stop

        for (int i = 0; i < 8; i++) {
            int hurufBaru = hurufLama + huruf[i];
            int angkaBaru = angkaLama + angka[i];

            if (hurufBaru >= 0 && hurufBaru < 8 && angkaBaru >= 0 && angkaBaru < 8 && papan[hurufBaru][angkaBaru] == 0) {
                papan[hurufBaru][angkaBaru] = papan[hurufLama][angkaLama] + 1;
                queue[rear++] = (Posisi){hurufBaru, angkaBaru};
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
        movement(hurufSekarang, angkaSekarang, hurufTarget, angkaTarget);
        printf("Case #%d: %d\n", tc, papan[hurufTarget][angkaTarget]);
    }

    return 0;
}

