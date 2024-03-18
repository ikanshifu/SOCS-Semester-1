#include <stdio.h>
#include <string.h>

/* IP Address: - Harus ada 6 angka
                - Cuman boleh ada 5 titik
                - Gak boleh mulai dari titik
                - Setiap celah angka harus titik
*/
int main() {
    int T;
    scanf("%d", &T);getchar();

    for (int tc = 1; tc <= T; tc++) {
        int flag = 0;
        int angka = 0;
        int titik = 0;
        int digitCount = 0;

        char S[101];
        scanf("%[^\n]", S);getchar();
        int length = strlen(S);
        for (int i = 0; i < length; i++) {
            if (S[i] == '.') {
                if (i == 0 || i == length - 1 || S[i - 1] == '.' || S[i + 1] == '.') {
                    flag = 1;
                    break;
                } else {
                    titik++;
                }
            } else if (S[i] >= '0' && S[i] <= '9') {
                digitCount++;
                if (i == length - 1 || S[i + 1] < '0' || S[i + 1] > '9') {
                    angka++;
                    digitCount = 0;
                }
            } else {
                flag = 1;
                break;
            }
        }

        if (angka != 6 || titik != 5) {
            flag = 1;
        }

        if (flag == 1) {
            printf("Case #%d: NO\n", tc);
        } else {
            printf("Case #%d: YES\n", tc);
        }
    }

    return 0;
}

