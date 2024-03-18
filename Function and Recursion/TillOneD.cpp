#include <stdio.h>

int formula(int N){
	if(N==0){
		return 0;
	}else if(N == 1){
		return 1;
	}else if(N%2==1){
		return formula(N-1)+formula(N+1);
	}else if(N%2==0){
		return formula(N/2);
	}
}

int main(){
	int T;
	scanf("%d",&T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		int result = formula(N);
		printf("Case #%d: %d\n",tc,result);	
	}
	return 0;
}
