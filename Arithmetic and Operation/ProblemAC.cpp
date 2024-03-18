#include<stdio.h>
#include<math.h>
int main(){
	long long N, Chance;
	scanf("%lld", &N);
	Chance = pow(2,N)-1;
	printf("%lld\n", Chance);
	return 0;
}
