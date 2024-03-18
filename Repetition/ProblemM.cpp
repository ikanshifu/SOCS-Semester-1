#include <stdio.h>

int main() {
    int T, N, M;
    scanf("%d", &T);
    long long price, total;
    for(int X = 1; X<=T;X++){
        scanf("%d %d", &N, &M);
        total = 0;
        for(int i = 1; i<=N;i++){
            scanf("%lld",&price);
            total = price+total;
        }
        if(M<total){
            printf("Case #%d: Wash dishes\n", X);
        }else{
            printf("Case #%d: No worries\n", X);
        }
    }

    return 0;
}
