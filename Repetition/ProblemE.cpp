#include <stdio.h>

int main()
{
    int X,P;
    int T=3;
    scanf("%d", &T);
   
    for(int i=0; i<T; i++)
    {
    	scanf("%d %d", &X, &P);
        printf("%d\n", (X>>P)&1);
    }
    return 0;
}
