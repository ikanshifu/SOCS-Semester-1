#include <stdio.h>
int main(){
	char N[100];
	char A[9];
	int U;
	scanf("%99[^\n]", N);
	scanf("%s %d", A, &U);
	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
	return 0;
}
