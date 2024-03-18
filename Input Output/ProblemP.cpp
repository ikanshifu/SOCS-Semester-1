#include<stdio.h>
int main(){
	char nama[102];
	scanf("%[^\n]", nama);
	printf("%s-san\n", nama);
	return 0;
}
