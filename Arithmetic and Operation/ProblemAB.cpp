#include<stdio.h>
int main(){
	double N;
	long long Total;
	scanf("%lf", &N);
	Total = N*100 + 50*(N-1)*(N/2);
//alternatif kalau misalnya pengen semua datanya interger, 50 dimasukkin ke N/2 jadinya 50N/2
	printf("%lld\n", Total);
	return 0;
}
