#include<stdio.h>

int main () {
	for (int i = 1; i <= 100; i++) {
		if (i*3 && i*5 == i*15) {
			continue;
		}
		printf("%d\n",i*3);
		printf("%d\n",i*5);
	}
	return 0;
}
