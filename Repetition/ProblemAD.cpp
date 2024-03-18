#include <stdio.h>
//mencari angka yang paling banyak diulang, angka tersebut menjadi outputnya
//index digunakan sebagai penanda dari valuenya. Contohnya nilai 1 masuk ke index 1, index 2 masuk ke index 2, namun di dalam index valuenya bukan angka tersebut tetapi jumlah dari angka tersebut.
//Contohnya jika terdapat 4 angka 1, maka 4 dimasukkan ke index 1.
int main(){
    int N, prize[1005],temp,max=0;
    for(int i=0;i<=1001;i++){
        prize[i]=0;
    }
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        scanf("%d", &temp);
        prize[temp]++;
    }
    for(int i=1;i<=1000;i++){
        if(prize[i]>max)
            max=prize[i];
    }
    printf("%d\n",max);
    return 0;
}
