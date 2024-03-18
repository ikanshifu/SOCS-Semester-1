#include <stdio.h>
int main(){
	long long A1,B1,C1,D1,A2,B2,C2,D2,A3,B3,C3,D3;
	long long hasil1,hasil2,hasil3;
	scanf("(%lld+%lld)x(%lld-%lld)", &A1, &B1, &C1, &D1);getchar();
	hasil1 = (A1+B1)*(C1-D1);
	scanf("(%lld+%lld)x(%lld-%lld)", &A2, &B2, &C2, &D2);getchar();
	hasil2 = (A2+B2)*(C2-D2);
	scanf("(%lld+%lld)x(%lld-%lld)", &A3, &B3, &C3, &D3);getchar();
	hasil3 = (A3+B3)*(C3-D3);
	
	printf("%lld %lld %lld\n", hasil1, hasil2, hasil3);
	return 0;
}
