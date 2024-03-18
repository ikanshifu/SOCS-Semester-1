#include<stdio.h>
int main(){
	long long N1, N2, N3;
	scanf("%lld", &N1);
	scanf("%lld", &N2);
	scanf("%lld", &N3);
	printf("%lld\n", (N1%100-(N1%100)%10)/10);
	printf("%lld\n", (N2%100-(N2%100)%10)/10);
	printf("%lld\n", (N3%100-(N3%100)%10)/10);
	return 0;
}
