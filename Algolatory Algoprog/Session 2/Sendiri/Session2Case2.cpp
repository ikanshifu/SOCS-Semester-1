#include <stdio.h>
#include <string.h>

char world[1005];
int count;

int main(){
	int T;
	scanf("%d", &T);getchar();

	for(int tc = 1;tc<=T;tc++){
		char x[1005];
		char y[1005];
		
		scanf("%[^\n]",x);getchar();
		scanf("%[^\n]",x);getchar();
		
		for(int i=0;i<strlen(x);i++){
			int flag=0;
			for(int j=0;j<strlen(y);j++){
				if(y[j]>='A'&&y[j]<='Z'){
					y[j]+=32;
				}
				
				if(x[i]==y[j] || x[i]+32 == y[j]){
					flag=1;
				}
			}
			if(flag==0){
				word[count]=x[i];
				count++;
			}
		}
	}
	return 0;
}
