#include <stdio.h>
int main(){
	long long X;
	double Y, Hasil;
	scanf("%lld %lf", &X, &Y);
	Hasil = X*(1+Y/100)*(1+Y/100)*(1+Y/100);
	printf("%.2lf\n",Hasil);
	return 0;
}
