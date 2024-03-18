#include <stdio.h>

int main(){
	int age;
	char name[101];
	
	scanf("%[^\n]", name);
	scanf("%d", &age);

	printf("Halo nama saya %s dan umur saya %d\n", name, age);	
	return 0;
}
