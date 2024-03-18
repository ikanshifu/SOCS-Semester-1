#include <stdio.h>
#include <string.h>
int main(){
	int T;
	scanf("%d",&T);getchar();
	for(int tc = 1;tc<=T;tc++){
		char S[100000001];
		scanf("%s",S);getchar();
		int length, flag = 0;
		length = strlen(S);
		char counter[31] = {0};
		for(int i = 0;i<length;i++){
			if(counter[S[i]-'a']==0){
				counter[S[i]-'a']++;
			}
		}
		for(int i = 0;i<31;i++){
			if(counter[i]>0){
				flag++;
			}
		}
		if(flag%2==0){
			printf("Case #%d: Yay\n",tc);
		}else{
			printf("Case #%d: Ewwww\n",tc);
		}
	}
	return 0;
}
