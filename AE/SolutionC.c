/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=M+1; i++)
    {
        printf("%d\n", N);
        N++;

    }
    return 0;
}
