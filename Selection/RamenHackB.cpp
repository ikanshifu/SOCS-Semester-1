#include <stdio.h>

int main(){
    int T,i;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        int K, N, M;
        scanf("%d %d %d", &K, &N, &M);
        if(N + M >= K){
            printf("Case #%d: yes\n",i+1);
        }
        else{
            printf("Case #%d: no\n",i+1);
        }
    }
return 0;

}
