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
