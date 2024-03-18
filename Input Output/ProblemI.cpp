#include <stdio.h>
int main(){
	char nama[100];
	scanf("%[^\n]", nama);
	printf("Hello %s!\n", nama);
	return 0;
}
