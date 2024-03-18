#include <stdio.h>

int notFibo(int a, int b, int K){
    if(K==0){
       return a;
    }else if(K==1){
        return b;
    }else{
        return notFibo(a,b,K-1)+notFibo(a,b,K-2);
    }
}

int main(){
    int a,b;
    int K,hasil;
    scanf("%d %d", &a,&b);
    scanf("%d", &K);
    hasil = notFibo(a,b,K);
    printf("%d\n",hasil);
    return 0;
}
