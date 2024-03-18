#include <stdio.h>

int main(){
    int T,i;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        int A,B;
        scanf("%d %d", &A, &B);
        if(A>B){
            printf("Case #%d: Go-Jo\n",i+1);
        }
        else{
            printf("Case #%d: Bi-Pay\n",i+1);
        }
    }
return 0;

}
