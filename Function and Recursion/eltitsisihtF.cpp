#include <stdio.h>
#include <string.h>
int main (){
	int N;
	scanf("%d",&N);getchar();
	char S[1005];
	for(int tc = 1; tc<=N;tc++){
		int length;
		scanf("%[^\n]", S);getchar();
		length = strlen(S);
		printf("Case #%d: ",tc);
		for(int i = length-1; i>=0; i--){
			printf("%c",S[i]);
		}
		printf("\n");
	}
	return 0;
}
