#include<stdio.h>
int main(){
	double N;
	long long Total;
	scanf("%lf", &N);
	Total = N*100 + (N-1)*(50*N/2);
	printf("%lld\n", Total);
	return 0;
}
