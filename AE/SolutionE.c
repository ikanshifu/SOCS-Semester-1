/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
