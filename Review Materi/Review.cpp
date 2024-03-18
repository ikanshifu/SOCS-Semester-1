#include <stdio.h>

int main() {
int n;
scanf("%d",&n);//3
for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
    		printf(" ");
		}
		for(int x=1;x<=n-i+1;x++){
			printf("*");
    }
    printf("\n");
}
    return 0;
}
