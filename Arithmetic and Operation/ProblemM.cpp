#include <stdio.h>
int main(){
	double X,Y,Hasil;
	scanf("%lf %lf", &X, &Y);
	Hasil = (X/Y)*100;
	printf("%.2lf%%\n", Hasil);
	return 0;
}
