#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);getchar();
	//Input
	char map[n+2][n+2];
	//Output
	char map2[n+2][n+2];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%c",&map[i][j]);
		}
		//Buat mastiin enter ga terinput dalam map
		//Enter = \n-> akan dibaca sebagai character
		getchar();
	}
	
	//Baris map jadi kolom map2
	//Kolom jadi baris dengan rumus n-kolom-1
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			map2[n-j-1][i]=map[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%c",map2[i][j]);
		}
		
		printf("\n");
	}
	return 0;
}

//@@@@@@@@@@@@@@@@
//@              @
//@  #####       @
//@  #           @
//@  #           @
//@  #           @
//@  #           @
//@              @
//@              @
//@              @
//@    ###       @
//@    #         @
//@              @
//@           #  @
//@              @
//@@@@@@@@@@@@@@@@
