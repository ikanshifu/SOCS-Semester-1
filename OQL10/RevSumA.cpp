#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		long long N,N1=0,revN=0,reverse=0;
		scanf("%lld",&N);
		N1=N;
    	while(N1>0){
//    	reverse=N1%10;    
//		revN=revN*10+reverse;    
		revN=revN*10+(N1%10);  
     	N1 = N1/10;   	
		}
		long long total = N + revN;
		printf("Case #%d: %lld\n",tc,total);
	}
	return 0;
}
