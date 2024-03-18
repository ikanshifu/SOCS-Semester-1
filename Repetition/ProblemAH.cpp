#include <stdio.h>
#include <string.h>
int main(){
    int T;
    char N[T];
    scanf("%d", &T);
    for(int x = 1; x<=T;x++){
        scanf("%s", N);
        printf("Case #%d: %d\n",x,strlen(N));
        }
    return 0;
}
