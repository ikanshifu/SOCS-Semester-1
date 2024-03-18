#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	long long int K,start, distance, minimumjumps;
	for(int tc = 1; tc<=T;tc++){
		start = 0; 
		minimumjumps = 0;
		distance = 1;
		scanf("%lld",&K);
		while(start<K){
			start += distance;
			distance++;
			minimumjumps++;
		}
		printf("Case #%d: %lld\n", tc, minimumjumps);
	}
	return 0;
}
