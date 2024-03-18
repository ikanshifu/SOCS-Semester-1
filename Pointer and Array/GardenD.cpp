#include <stdio.h>

int main(){
	int X,Y;
	scanf("%d %d",&X,&Y);
	int arr[X][Y];
	for(int row = 0;row<X;row++){
		for(int col = 0;col<Y;col++){
			scanf("%d",&arr[row][col]);
		}
	}
	int T;
	scanf("%d",&T);
	int a,b,c;
	for(int i = 0;i<T;i++){
		scanf("%d %d %d",&a,&b,&c);
		arr[a-1][b-1] = c;
	}
	
	for(int row = 0;row<X;row++){
		for(int col = 0;col<Y;col++){
			printf("%d", arr[row][col]);
			if(col<Y-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
