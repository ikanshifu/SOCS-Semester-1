#include <stdio.h>

int faktorial(int n, int k){
	if(k==n||k==0){
		return 1;
	}else{
		return faktorial(n-1,k-1) + faktorial(n-1,k);
	}
}
int main(){
	int N;
	//N = baris
	//K = kolom
	scanf("%d",&N);
	for(int i = 0; i<=N;i++){
		printf("%d ", faktorial(N,i));
	}
	printf("\n");
	// \b
	return 0;
}
