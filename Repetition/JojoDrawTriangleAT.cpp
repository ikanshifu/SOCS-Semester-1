#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int x;
	for(int tc = 1;tc<=T;tc++){
		scanf("%d",&x);
		int spasi = x-1;
		for(int i = 1;i<=x;i++){
			for(int j = 1;j<=spasi;j++){
				printf(" ");
			}
			for(int j = 1;j<=2*i-1;j++){
				printf("*");
			}
			printf("\n");
			spasi--;
		}
	}
	return 0;
}
