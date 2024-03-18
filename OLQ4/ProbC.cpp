#include <stdio.h>

int main(){
    int T,i;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        long long int N,M;
        scanf("%lld %lld", &N, &M);
        if((N*M)%2==1){
            printf("Case #%d: Need more frogs\n",i+1);
        }else{
            printf("Case #%d: Party time!\n",i+1);
        }
    }
return 0;
}
