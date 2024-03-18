#include <stdio.h>

int main(){
    int T,i;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
    	long long int A,B,C,hasil;
        scanf("%lld %lld %lld", &A, &B, &C);
        hasil = A*B/100; 
        if(hasil>C){
            printf("Case #%d: %lld\n",i+1,C);
        }else{
            printf("Case #%d: %lld\n",i+1,hasil);
        }
    }
return 0;
}
