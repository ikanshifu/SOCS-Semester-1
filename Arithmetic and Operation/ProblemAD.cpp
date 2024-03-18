#include<stdio.h>
int main(){
	double Ph, M, Pu,Total;
	scanf("%lf %lf %lf", &Ph, &M, &Pu);
	Total = (Ph*1/5)+(M*3/10)+(Pu*1/2);
	printf("%.2lf\n", Total);
	return 0;
}
