#include <stdio.h>

//Jojo Bizzare Eyes

int main(){
	int S;
	scanf("%d", &S);
	//Input map
	char map[S+2][S+2];//Alasan kenapa size char array selalu dilebihkan 1 atau 2 adalah karena terkadang di akhir string ada 1 huruf yaitu \0, sehingga terhitung sebagai 1 huruf.
	
	//Output map
	char map[S+2][S+2];
	
	for(int i=0;i<S;i++){
		for(int j=0;j<S;j++){
			scanf("%c", &map[i][j]);getchar();
			//fungsi getchar(); adalah untuk memastikan bahwa \n atau enter tidak terhitung dalam array, karena enter bisa terhitung
		}
	}
	
	//Rumus: Baris => Kolom, Kolom => Baris tapi dengan rumus(S- Kolom - 1)
	
	for(int i=0;i<S;i++){
		for(int j=0;j<S;j++){
			map2[i][j] = map[j][S-i-1];
		}
	}
	
	for(int i=0;i<S;i++){
		for(int j=0;j<S;j++){
			printf("%c")map2[i][j];
		}
	}
	return 0;
}
