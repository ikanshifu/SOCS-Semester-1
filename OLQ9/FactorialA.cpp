#include <stdio.h>
#define MOD 1000000007

int factorial(int N){
	if(N == 0 || N == 1){
		return 1;	
	}else{
		long long hasil1 = 1;
		for(int i = 1;i<=N;i++){
			hasil1 = (hasil1*i)%MOD;
		}
		return hasil1;
	}
}


int main(){
	int T;
	scanf("%d", &T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		long long hasil = 1;
		int X[101];
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&X[i]);
			hasil = (hasil*factorial(X[i]))%MOD;
		}
		printf("Case #%d: %lld\n", tc, hasil);
	}
	return 0;
}
