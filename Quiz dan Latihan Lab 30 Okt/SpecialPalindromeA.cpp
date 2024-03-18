#include <stdio.h>
#include <string.h>

int main(){
	char text[105];
	scanf("%[^\n]",text);
	int length = strlen(text);
	int invalid = 0;
	for(int i = 0, j=length-1;i<length,j>=0;i++,j--){
		if(text[i]!=text[j]&&(text[i]!='_'&&text[j]!='_')){
            invalid=1;
            break;
        }else if(text[i]=='_'&&text[j]=='_'){
            invalid=1;
            break;
        }
	}if(invalid == 1){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
	return 0;
}
