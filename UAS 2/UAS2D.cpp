#include<stdio.h>
//Flood at Bibi's house
char map[15][15];

void flood(int x, int y,int *flag){
	if(map[x][y]== '#' || map[x][y] == '\n'|| x < 0 || y < 0||x >9 || y >9){
		return;
	}else if(map[x][y] == 'E'){
		(*flag)++;
	}
	map[x][y] = '#';
    flood(x + 1, y,flag);//gerak ke bawah
    flood(x - 1, y,flag);//gerak ke atas
    flood(x, y + 1,flag);//gerak ke kanan
    flood(x, y - 1,flag);//gerak ke kiri

}

int main(){
	int x = 0, y = 0, flag = 0;
	for(int row = 0; row < 10; row++){
		for(int col = 0; col < 10; col++){
			scanf("%c", &map[row][col]);
			if(map[row][col]=='S'){
				x = row;
				y = col;
			}
		}
	}
	flood(x, y,&flag);
	if(flag<=0){
		printf("GAGAL\n");
	}else{
		printf("BERHASIL\n");	
	}
	for(int row = 0; row<15; row++){
		for(int col=0; col<15;col++){
			map[row][col]='\0';
		}
	}
	return 0;
}
