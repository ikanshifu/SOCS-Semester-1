#include<stdio.h>
int main(){
	double T, Ut, Ua, Total;
	scanf("%lf %lf %lf", &T, &Ut, &Ua);
	Total = (T*1/5)+(Ut*3/10)+(Ua*1/2);
	printf("%.2f\n", Total);
	return 0;
}
