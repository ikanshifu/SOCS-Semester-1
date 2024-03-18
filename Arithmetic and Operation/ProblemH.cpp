#include<stdio.h>
int main(){
	int a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;
	double hasil1, hasil2, hasil3;
	scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
	scanf("%d %d %d %d", &a2, &b2, &c2, &d2);
	scanf("%d %d %d %d", &a3, &b3, &c3, &d3);
	hasil1 = (2*a1/1)+(4*b1/2)+(6*c1/3)+(4*d1/4);
	hasil2 = (2*a2/1)+(4*b2/2)+(6*c2/3)+(4*d2/4);
	hasil3 = (2*a3/1)+(4*b3/2)+(6*c3/3)+(4*d3/4);
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);
	return 0;
}
