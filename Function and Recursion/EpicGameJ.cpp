#include <stdio.h>

void operation(long long int N){
	long long int counter = 0;
	while(N!=1){
		counter++;
		if(N%2==0){
			N=N/2;
		}else{
			N = (N*3)+1;
		}	
	}
	if(counter%2==1){
		printf("Jojo\n");
	}else{
		printf("Lili\n");
	}
}

int main(){
	long long int T;
	scanf("%lld",&T);
	long long int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%lld",&N);
		printf("Case #%d: ",tc);
		operation(N);
	}
	return 0;
}
