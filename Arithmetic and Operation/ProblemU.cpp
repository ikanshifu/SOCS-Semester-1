#include<stdio.h>
int main(){
	int T;
	double A1,A2,A3,B1,B2,B3,hasil1,hasil2,hasil3;
	scanf("%d", &T);
	scanf("%lf %lf", &A1, &B1);
	scanf("%lf %lf", &A2, &B2);
	scanf("%lf %lf", &A3, &B3);
	T = 3;
	hasil1 = (A1*B1)/360;
	hasil2 = (A2*B2)/360;
	hasil3 = (A3*B3)/360;
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);

	return 0;
}
