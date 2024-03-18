#include <stdio.h>
int main(){
	long long A,B;
	double hasil;
	scanf("%lld %lld", &A, &B);
	hasil = B*100/A;
	printf("%.4f%%\n",hasil);
	return 0;
}
