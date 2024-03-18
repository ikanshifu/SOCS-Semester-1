#include <stdio.h>

int main(){
    int T,N;
    long long a, total;  
    scanf("%d", &T);
    for(int x = 1; x<=T;x++){
    	scanf("%d", &N);
    	total = 0;
    	for(int i = 1; i<=N;i++){
    		scanf("%lld", &a);
    		total = a + total;
	}
	printf("Case #%d: %lld\n",x,total);
}
    return 0;
}
