#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	char S[1005];
	char change;
	int length;
	for(int tc = 1; tc<=T;tc++){
		scanf("%[^\n]",S);getchar();
		scanf("%c", &change);getchar();
		length = strlen(S);
		for (int i=0;i<length;i++){
			if(S[i]==change){
				if(change >= 'a'&& change<='z'){
					S[i] = S[i] -32;
				}else if(change >= 'A'&& change<='Z'){
					S[i] = S[i] +32;
				}
			}
		printf("%c",S[i]);
		}
		printf("\n");
	}
	return 0;
}
