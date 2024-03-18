#include <stdio.h>
#include <string.h>

void toLowerCase(char *text) {
	int length = strlen(text);
    for (int i = 0; i<length; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + ('a' - 'A');
        }
    }
}

void checkPalindrome(char text[],int *invalid){
	int length = strlen(text);
	for(int i = 0, j=length-1;i<length,j>=0;i++,j--){
		if(text[i]!=text[j]){
            *invalid=1;
            break;
        }
    }
}

int main(){
	int T;
	scanf("%d",&T);getchar();
	for(int tc = 1; tc<=T;tc++){
		char text[105];
		scanf("%s",text);getchar();
		int invalid = 0;
		toLowerCase(text);
		checkPalindrome(text,&invalid);
		if(invalid == 1){
        	printf("Case #%d: no\n",tc);
    	}else{
     		printf("Case #%d: yes\n",tc);
   		}
   	}
	return 0;
}
