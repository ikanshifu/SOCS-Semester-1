#include<stdio.h>
//Flood at Bibi's house
char map[105][105];

void flood(int x, int y,int *counter){
	if(map[x][y]== '#' || map[x][y] == '\n'|| map[x][y] == '\0'|| x < 0 || y < 0){
		return;
	}else if(map[x][y] == '.'){
		(*counter)++;
	}
	
	map[x][y] = '#';
	
    flood(x + 1, y,counter);//gerak ke bawah
    flood(x - 1, y,counter);//gerak ke atas
    flood(x, y + 1,counter);//gerak ke kanan
    flood(x, y - 1,counter);//gerak ke kiri

}

int main(){
	int T;
	scanf("%d", &T);
	int N, M;
	for(int tc=1; tc<=T; tc++){
		int x = 0, y = 0, counter = 0;
		scanf("%d %d", &N, &M);
		for(int row = 0; row < N; row++){
			for(int col = 0; col < M+1; col++){
				scanf("%c", &map[row][col]);
				if(map[row][col]=='S'){
					x = row;
					y = col;
				}
			}
		}
		flood(x, y,&counter);
		printf("Case #%d: %d\n", tc, counter);
		for(int row = 0; row<105; row++){
			for(int col=0; col<105;col++){
				map[row][col]='\0';
			}
		}
	}
	return 0;
}
