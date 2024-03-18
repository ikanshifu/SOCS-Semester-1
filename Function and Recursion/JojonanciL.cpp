#include <stdio.h>

int jojonanci(long long N, long long X, long long Y){
	if(N==0){
		return X;
	}else if(N==1){
		return Y;
	}else{
		return jojonanci(N-1,X,Y) - jojonanci(N-2,X,Y);	
	}
}

int main(){
	int T;
	scanf("%d",&T);
	long long N,X,Y;
	for(int tc = 1;tc<=T;tc++){
		scanf("%lld %lld %lld",&N,&X,&Y);
		long long result = jojonanci(N,X,Y);
		printf("Case #%d: %d\n",tc,result);
	}
	return 0;
}
