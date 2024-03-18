#include <stdio.h>
int main(){
	double L,B,H, luasalas, luassegitiga, hasil;
	scanf("%lf %lf %lf", &L, &B, &H);
	luasalas = 3*L*B;
	luassegitiga =2*0.5*B*H;
	hasil =  luasalas+luassegitiga;
	printf("%.3lf\n", hasil);
	return 0;
}
