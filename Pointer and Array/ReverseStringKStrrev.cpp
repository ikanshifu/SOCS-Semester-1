#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);
	char text[101];
	for(int tc = 1; tc<=T; tc++){
		scanf("%[^\n]",text);getchar();
		strrev(text);
		printf("Case #%d : %s\n",tc,text);
	}
	return 0;
}
