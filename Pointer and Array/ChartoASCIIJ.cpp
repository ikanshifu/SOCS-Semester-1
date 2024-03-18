#include<stdio.h>
#include<string.h>

int main(){
	int T;
	scanf("%d",&T);getchar();
	for(int tc= 1;tc<=T;tc++){
		char S[1001];
		scanf("%s",S);
		int length = strlen(S);
		printf("Case %d: ",tc);
		for(int i = 0;i<length;i++){
			printf("%d",S[i]);
			if(i<length-1){
				printf("-");
			}
		}
		printf("\n");
	}
	
	return 0;
}
