#include<stdio.h>

void fireSimulation(char field[][105], int N, int M, int x, int y){
	int moveX[] = {-1, 1, 0,  0, -1, 1,  1, -1};
	int moveY[] = { 0, 0, 1, -1,  1, 1, -1, -1};
	
	int queueX[105*105], queueY[105*105];
	int head = 0, tail = 0; 
	
	queueX[tail] = x; 
	queueY[tail] = y;
	tail++; 
	
	while (head < tail && M > 0) { 
		int size = tail - head;
		while (size > 0) {
			size--;
			
			int currX = queueX[head];
			int currY = queueY[head];
			head++;
			
			for (int i = 0; i < 8; i++) {
				int newX = currX + moveX[i];
				int newY = currY + moveY[i];
				if (newX >= 0 && newY >= 0 && newX < N && newY < N && field[newX][newY] == '#') {
					queueX[tail] = newX;
					queueY[tail] = newY;
					tail++;
					field[newX][newY] = 'F';
				}
			}
		}
		M--;
	}
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int T;
	fscanf(fp, "%d\n", &T);
	for(int tc = 1; tc <= T; tc++){
		int N, M;
		fscanf(fp, "%d %d\n", &N, &M);
		char field[105][105];
		int x, y;
		for(int row = 0; row < N; row++){
			for(int col = 0; col < N; col++){
				fscanf(fp, " %c", &field[row][col]);
				if(field[row][col] == 'F'){
					x = row;
					y = col;
				}
			}
		}
		
		fireSimulation(field, N, M-1, x, y);
		printf("Case #%d:\n", tc);
		for(int row = 0; row  < N; row ++){
			for(int col = 0; col < N; col++){
				printf("%c", field[row][col]);
			}
			printf("\n");
		}
		printf("\n");
	}
	fclose(fp);
	
	return 0;
}

