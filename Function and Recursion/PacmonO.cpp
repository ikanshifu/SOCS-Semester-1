#include <stdio.h>
//Pacmon
//x = lokasi row player di map
//y = lokasi col player di map
char map[105][105];
void movement(int x, int y,int *food){
	if(map[x][y]== '#' || map[x][y] == '\n'|| map[x][y] == '\0'|| x < 0 || y < 0){
		return;
	}else if(map[x][y] == '*'){
		(*food)++;
	}
	
	map[x][y] = '#';
	
	movement(x+1,y,food);//gerak ke bawah
	movement(x-1,y,food);//gerak ke atas
	movement(x,y+1,food);//gerak ke kanan
	movement(x,y-1,food);//gerak ke kiri
}

int main(){
	int T;
	scanf("%d",&T);
	int N,M;
	//N = number of rows
	//M = number of columns
	for(int tc=1;tc<=T;tc++){
		scanf("%d %d",&N,&M);
		int x=0,y=0;
		int food = 0; 
		for(int row = 0;row<N;row++){
			for(int col = 0;col<M+1;col++){
				scanf("%c",&map[row][col]);
				if(map[row][col]=='P'){
					x = row;
					y = col;
				}
			}
		}
		movement(x,y,&food);
		printf("Case #%d: %d\n",tc,food);
		for(int row = 0; row<105; row++){
			for(int col=0; col<105;col++){
				map[row][col]='\0';
			}
		}
	}
	return 0;
}
