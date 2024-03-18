#include <stdio.h>
int main(){
	double A,B,Hasil;
	scanf("%lld %lld",&A, &B);
	Hasil = 100-B/A*100;
	printf("%.2lf%%\n", Hasil);

	return 0;
}
