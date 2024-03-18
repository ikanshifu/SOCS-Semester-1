#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int total = (n%10)+(((n%100)-(n%10))/10)+(((n%1000)-(n%100))/100)+(((n%10000)-(n%1000))/1000)+((n-(n%1000))/10000);
    printf("%d",total);
    return 0;
}
