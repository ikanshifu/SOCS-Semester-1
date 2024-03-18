#include <stdio.h>
#include <string.h>

int main () {
	int tc;
	scanf("%d", &tc);
	
	for (int i = 0; i < tc; i++) {
		char c[1001];
		scanf("%s", c);
		
		int length = strlen(c);
		
		int flag = 0;
		for (int j = 0; j < length; j++) {
			if (c[j] != 'A' || c[j] != 'I' || c[j] != 'U' || c[j] != 'E' || c[j] != 'O') {
				flag = 1;
			} else {
				printf("%c", c[j]);
			}
		}
	}
	return 0;
}
