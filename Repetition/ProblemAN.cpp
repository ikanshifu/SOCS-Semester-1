#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	int A,B,C,D,E,F;
	for(int x = 1;x<=T;x++){
		scanf("%d %d %d %d %d %d", &A,&B,&C,&D,&E,&F);
		printf("Case #%d: ",x);
		for(int i = 0;i<A;i++){
			printf("a");
		}
		for(int i = 0;i<B;i++){
			printf("s");
		}
		for(int i = 0;i<C;i++){
			printf("h");
		}
		for(int i = 0;i<D;i++){
			printf("i");
		}
		for(int i = 0;i<E;i++){
			printf("a");
		}
		for(int i = 0;i<F;i++){
			printf("p");
		}
		printf("\n");
	}
	return 0;
}
