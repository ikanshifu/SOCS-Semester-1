#include<stdio.h>
#include<string.h>

//Cara buat store string baru
//Global variabel adalah variabel yang nilainya bisa diakses dari fungsi manapun
char word[1005];
int count;

int main(){
	int tc;
	scanf("%d",&tc);getchar();
	
	for(int k=1;k<=tc;k++){
		char x[1005];
		char y[1005];
		
		scanf("%[^\n]",x); getchar();
		scanf("%[^\n]",y); getchar();
		
		
		for(int i=0;i<strlen(x);i++){
			int flag=0;
			for(int j=0;j<strlen(y);j++){
				if(y[j]>='A' && y[j]<='Z'){
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
		
		printf("Case #%d: %s\n",k,word );
		
		//Resetlah data global variable
		for(int i=0;i<count;i++){
			word[i]='\0';
		}
		count = 0;

	}
	return 0;
}
