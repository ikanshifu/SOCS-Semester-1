#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);getchar();
	for(int tc = 1;tc<=T;tc++){
		char str[1001];
		int M, length;
		scanf("%s",str);getchar();
		length = strlen(str);
		scanf("%d", &M);getchar();
		char target[M], ganti[M];
		for(int i = 0;i<M;i++){
			scanf("%c %c",&target[i], &ganti[i]);getchar();
			for(int j = 0;j<length;j++){
				if(str[j]==target[i]){
					str[j]=ganti[i];
				}
			}
		}
		printf("Case #%d: %s\n",tc,str);
	}
	return 0;
}
