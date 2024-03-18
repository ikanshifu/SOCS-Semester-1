#include<stdio.h>
int main(){
	int T;
	double P1,P2,P3,N1,N2,N3,hasil1,hasil2,hasil3;
	scanf("%d", &T);
	scanf("%lf %lf", &P1, &N1);
	scanf("%lf %lf", &P2, &N2);
	scanf("%lf %lf", &P3, &N3);
	T = 3;
	hasil1 = (P1/100)*N1;
	hasil2 = (P2/100)*N2;
	hasil3 = (P3/100)*N3;
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);

	return 0;
}
