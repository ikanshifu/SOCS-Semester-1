#include <stdio.h>
int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    for(int x = 1; x<=N;x++){
    	for(int i=1;i<=M;i++){
    		for(int j=1;j<=M-i;j++){
				printf(" ");
			}
			for(int y=1;y<=i;y++){
			printf("*");
			}
			printf("\n");
		}
    }
    return 0;
}
