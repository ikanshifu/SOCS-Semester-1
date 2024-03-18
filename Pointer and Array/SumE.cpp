#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);
	int x;
	for(int i = 1;i<=T; i++){
		scanf("%d", &x);
		int a[x][x];
		int sum_col[x];
		for(int j = 0; j<x;j++){
			sum_col[j]=0;
		}
		
		for(int m = 0;m<x;m++){
			for(int n = 0;n<x;n++){
				scanf("%d",&a[m][n]);
				sum_col[n] = sum_col[n] + a[m][n];
			}
		}
		printf("Case #%d:",i);
		for(int j = 0; j<x;j++){
			printf(" %d",sum_col[j]);
		}
		printf("\n");
	}
	return 0;
}
