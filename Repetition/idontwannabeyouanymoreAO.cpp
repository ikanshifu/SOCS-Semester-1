#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1; tc<=T;tc++){
		int N = 0;
		scanf("%d",&N);getchar();
		char S[N+5];
		scanf("%[^\n]", S);getchar();
		printf("Case #%d: ", tc);
		for(int i = 0;i<N; i++){
			if(S[i] >= 'a'&& S[i]<='z'||S[i] >= 'A'&& S[i]<='Z'){
				printf("%c", S[i]);
			}else{
				continue;
			}
		}
		printf("\n");
	}
	return 0;
}
