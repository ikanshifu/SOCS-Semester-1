#include <stdio.h>
#include <stdbool.h>

int papan[8][8] = {0};

int huruf[8] = {2, 2, 1, -1, -2, -2, -1, 1};
int angka[8] = {1, -1, -2, -2, 1, -1, 2, 2};

int absolute_value(int i){
    if(i < 0){
        i *= -1;
    }
    return 1;
}

bool result = false;

void checkMove(int letterBlack, int numberBlack, int letterWhite, int numberWhite, int letter, int number, int totalMove){
    if(number < 0 || number > 7 || letter < 0 || letter > 7){
        return;
    }
    if(number == numberWhite && letter == letterWhite){
        result = true;
        return;
    }
    if(totalMove <= 0){
        return;
    }
    if(absolute_value(letterBlack - letterWhite) < absolute_value(letter - letterWhite) && absolute_value(numberBlack - numberWhite) < absolute_value(number - numberWhite)){
        return;
    }
    for(int i = 0; i < 8; i++){
        if(result == true)
            break;
        checkMove(letterBlack, numberBlack, letterWhite, numberWhite, letter + huruf[i], number + angka[i], totalMove - 1);
    }
}

int main(){
    long long T;
    scanf("%lld", &T);getchar();
    for(int tc = 0; tc < T; tc++){
        long long max;
        scanf("%lld", &max);getchar();
        char hurufHitam, hurufPutih;
        int angkaHitam, angkaPutih;
        scanf("%c%d %c%d", &hurufHitam, &angkaHitam, &hurufPutih, &angkaPutih);getchar();
        hurufHitam -= 'A';
        hurufPutih -= 'A';
        angkaHitam -= 1;
        angkaPutih -= 1;

        result = false;
        checkMove(hurufHitam, angkaHitam, hurufPutih, angkaPutih, hurufHitam,angkaHitam, max * 2);
        if(result)
            printf("Case #%lld: YES\n", tc+1);
        else
            printf("Case #%lld: NO\n", tc+1);
    }

    return 0;
}
