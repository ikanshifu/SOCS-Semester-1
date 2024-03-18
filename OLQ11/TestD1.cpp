#include <stdio.h>
//Terjadi sebuah kebakaran, carilah pola penyebaran api
//Api menyebar setiap detik, pada detik 1 yaitu t = 1 ada 1 bagian yang sudah terbakar(mengandung F)
//# menandakan rumput dan F menandakan api
/*Logic:
scan dulu fieldnya yang awal lalu bikin field sementara yang baru(temp field) 
untuk jadi tempat kita ubah # jadi F. Setelah selesai diubah2, baru temp field
di copy paste ke field utama dan setelah itu di print
*/
void fireSimulation(int N, int M, int x, int y,char field[][105]){
	int moveLeftRight[] = {-1, 1, 0,  0, -1, 1,  1, -1};
	int moveUpDown[] = { 0, 0, 1, -1,  1, 1, -1, -1};

	int tempX[105], tempY[105];
	int front = 0, back = 0; 
	
	tempX[back] = x; 
	tempY[back] = y;
	back++; 
	while (front < back && M > 0) { 
		int size = back - front;
		while (size > 0) {
			size--;
			
			int currentX = tempX[front];
			int currentY = tempY[front];
			front++;
			for (int i = 0; i < 8; i++) {
				int X = currentX + moveLeftRight[i];
				int Y = currentY + moveUpDown[i];
				if (X >= 0 && Y >= 0 && X < N && Y < N && field[X][Y] == '#') {
					tempX[back] = X;
					tempY[back] = Y;
					back++;
					field[X][Y] = 'F';
				}
			}
		}
		M = M-1;
	}
}
int main(){
	int T;
	FILE*fp = fopen("testdata.in", "r");
	
	if(fp == NULL){
		printf("File not found\n");
		return 1;
	}
	
	fscanf(fp,"%d\n",&T);
	for(int tc = 1;tc<=T;tc++){
		int N,M;
		//N ukuran dari padang rumput
		//M jumlah detik yang terlewat
		fscanf(fp,"%d %d\n",&N,&M);
		char field[105][105];
		int x,y;
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++){
				fscanf(fp, " %c", &field[row][col]);
            	if(field[row][col] == 'F'){
					x = row;
					y = col;
				}
			}
        }
        fscanf(fp, "\n");
        fireSimulation(N,M-1,x,y,field);
		printf("Case #%d:\n",tc);
		for(int row = 0; row<N;row++){
			for(int col = 0; col<N;col++){
				printf("%c",field[row][col]);
			}
			printf("\n");
		}
		if(tc<T){
			printf("\n");	
		}
	}
	fclose(fp);
	return 0;
}
