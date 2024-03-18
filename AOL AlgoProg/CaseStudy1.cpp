#include <stdio.h>
#include <string.h>
/*AOL AlgoProg - Case Study 1
	Name: Clive Clay Irawan
	NIM: 2702373412
	Class: LA01
	
	Goal: Make a program that takes a string then reverse it, followed
		  by inverse capitalization 		  
*/

void reverseString(char* text,int length) {
    for(int i = 0; i<length/2;i++){
    	char temp = text[i];
    	text[i] = text[length-i-1];
    	text[length - i - 1] = temp;
	}
}

int main (){
	char S[105];
	int length;
	scanf("%[^\n]", S);getchar();
	length = strlen(S);
	reverseString(S,length);
	for(int i = 0; i<length; i++){
		if(S[i]>='A'&&S[i]<='Z'){
			S[i] = S[i]+32;
		}else if(S[i]>='a'&&S[i]<='z'){
			S[i] = S[i]-32;
		}
		printf("%c",S[i]);
	}
	printf("\n");
	return 0;
}
