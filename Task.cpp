#include <stdio.h>
int main(){
	char A;
	scanf("%c", &A);
	if (A>=97 && A<=122){
		printf("%c",A-32);
	} else {
		printf("%c",A);
	}
	return 0;
}
