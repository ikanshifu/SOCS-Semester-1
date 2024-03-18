/*
	pseudocode
*/
#include <stdio.h>

int main(){
	double x;
	scanf("%lf",&x);
	double N,M,T,luas,total=0, hasil;
	for(int i = 0; i<x;i++){
		scanf("%lf %lf", &M, &N);
		luas = M*N;
		total = total + luas;
	}
	scanf("%lf", &T);
	hasil = total/T;
	printf("%.2lf",hasil);
	return 0;
}
