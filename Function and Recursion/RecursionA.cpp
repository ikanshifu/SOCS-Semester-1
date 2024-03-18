#include <stdio.h>

int calculate(int N, int *counter){
	int hasil = 0;
	if(N%3==0&&N>=3){
		(*counter)++;
	}
	if(N == 0){
		return 1;
	}else if(N==1){
		return 2;
	}else if(N%5==0){
		return N*2;
	}else{
		return calculate(N-1,counter)+N+calculate(N-2,counter)+N-2;
	}
}
int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		int N;
		scanf("%d",&N);
		int counter=0;
		int hasil = calculate(N, &counter);
		printf("Case #%d: %d %d\n",tc,hasil,counter);
	}	
	return 0;
}
