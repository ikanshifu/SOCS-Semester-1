#include<stdio.h>

int main(){
	int N = 1,Q;
	scanf("%d",&Q);
	for(int i = 0; i<Q;i++){
		N = (N*2)+1;
	}
	printf("%d\n", N);
	return 0;
}
