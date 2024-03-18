#include<stdio.h>
int main(){
	int T;
	double a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3, hasil1, hasil2, hasil3;
	scanf("%d", &T);
	scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1);
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3);
	T = 3;
	hasil1 = (2*a1/1)+(4*b1/2)+(4*c1/3)+(2*d1/4);
	hasil2 = (2*a2/1)+(4*b2/2)+(4*c2/3)+(2*d2/4);
	hasil3 = (2*a3/1)+(4*b3/2)+(4*c3/3)+(2*d3/4);
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);
	return 0;
}
