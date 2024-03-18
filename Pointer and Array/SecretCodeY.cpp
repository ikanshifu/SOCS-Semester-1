#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);getchar();
	for(int tc = 1;tc<=T;tc++){
		char str[1001];
		int Q, length;
		scanf("%d %s",&Q, str);getchar();
		length = strlen(str);
		for(int i = 0;i<Q;i++){
			int target, tuker;
			char temp;
			scanf("%d %d",&target, &tuker);getchar();
			while(target<tuker){
				temp=str[target-1];
				str[target-1]=str[tuker-1];
				str[tuker-1]=temp;
				target++;
				tuker--;
			}
		}
		printf("Case #%d: %s\n",tc,str);
	}
	return 0;
}
