#include <stdio.h>
void print(int n){
    if(n>0){
        print(n-1);
        printf("%d",n);
    }
}

int main(){
    int number;
    scanf("%d", &number);
    print(number);

    printf("\n");
    printf("%d",number);
    return 0;
}
