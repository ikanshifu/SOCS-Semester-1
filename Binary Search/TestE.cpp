#include <stdio.h>

int findMax(long long N,long long M,long long A[]){
	long long total=0,length=0,max = 0;
	for(int i = 0;i<N;i++){
		total = total + A[i];
		length++;
		while(total>M){
			total = total - A[i - length + 1];
			length--;
		}
		if(length>max){
			max = length;
		}
	}
	
	if(max>0){
		return max;
	}else{
		return -1;
	}
}

int main(){
	long long N;
	scanf("%lld",&N);
	long long A[N];
	for(int i = 0;i<N;i++){
		scanf("%lld",&A[i]);
	}
	int T;
	scanf("%d",&T);
	long long M;
	for (int tc = 1;tc<=T;tc++){
		scanf("%lld",&M);
		long long max = findMax(N,M,A);
		printf("Case #%d: %lld\n",tc,max);
	}
	return 0;
}
