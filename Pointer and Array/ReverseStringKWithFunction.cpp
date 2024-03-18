#include <stdio.h>
#include <string.h>

void reverseString(char* text) {
    int length = strlen(text);
    for(int i = 0; i<length/2;i++){
    	char temp = text[i];
    	text[i] = text[length-i-1];
    	text[length - i - 1] = temp;
	}
}

int main(){
	int N;
	scanf("%d",&N);
	char text[101];
	for(int i = 1; i<=N; i++){
		scanf("%s",text);
		reverseString(text);
		printf("Case #%d : %s\n",i,text);
	}
	return 0;
}
