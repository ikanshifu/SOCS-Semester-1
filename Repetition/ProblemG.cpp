#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    long long num,total = 0;
    for(int i = 1; i<=N;i++){
        scanf("%lld", &num);
        total = total + num;
        }
        printf("%lld\n",total);
    return 0;
}
