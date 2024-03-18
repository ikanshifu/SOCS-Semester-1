#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N;
	char alphabet[28];
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		printf("Case #%d: ", tc);
		for(int i = 0; i<N;i++){
			alphabet[i] = 'a' + i;
			printf("%c", alphabet[i]);
		}
		printf("\n");
	}
	return 0;
}
