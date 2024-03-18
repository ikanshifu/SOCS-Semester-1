#include<stdio.h>
int main(){
	int T;
	double A1,A2,A3,R1,F1,K1,R2,F2,K2,R3,F3,K3;
	scanf("%d", &T);
	scanf("%lf", &A1);
	scanf("%lf", &A2);
	scanf("%lf", &A3);
	T = 3;
	R1 = A1*4/5;
	F1 = A1*9/5 + 32;
	K1 = A1 + 273;
	R2 = A2*4/5;
	F2 = A2*9/5 + 32;
	K2 = A2 + 273;
	R3 = A3*4/5;
	F3 = A3*9/5 + 32;
	K3 = A3 + 273;
	printf("%.2lf %.2lf %.2lf\n", R1,F1,K1);
	printf("%.2lf %.2lf %.2lf\n", R2,F2,K2);
	printf("%.2lf %.2lf %.2lf\n", R3,F3,K3);
	return 0;
}
