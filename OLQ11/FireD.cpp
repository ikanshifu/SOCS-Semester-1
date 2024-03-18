#include <stdio.h>
//Terjadi sebuah kebakaran, carilah pola penyebaran api
//Api menyebar setiap detik, pada detik 1 yaitu t = 1 ada 1 bagian yang sudah terbakar(mengandung F)
//# menandakan rumput dan F menandakan api
/*Logic:
scan dulu fieldnya yang awal lalu bikin field sementara yang baru(temp field) 
untuk jadi tempat kita ubah # jadi F. Setelah selesai diubah2, baru temp field
di copy paste ke field utama dan setelah itu di print
*/
void fireSimulation(int N, int M, char field[102][102]){
	char tempField[102][102];
	for(int t = 1; t<M;t++){
		for(int row = 0; row < N; row++){
			for(int col = 0; col < N; col++){
				tempField[row][col] = field[row][col];
			}
		}
		
    	for (int row = 0; row < N; row++) {
        	for (int col = 0; col < N; col++) {
            	if(field[row][col] == 'F'){
					//Down
					if(row < N-1 && field[row+1][col] == '#'){
						tempField[row+1][col] = 'F';
					}
					//Up
					if(row > 0 && field[row-1][col] == '#'){
						tempField[row-1][col] = 'F';
					}
					//Right
					if(col < N-1 && field[row][col+1]== '#'){
						tempField[row][col+1] = 'F';
					}
					//Left
					if(col > 0 && field[row][col-1] == '#'){
						tempField[row][col-1] = 'F';
					}
					//Diagonal upper right
					if(row > 0 && col < N-1 && field[row-1][col+1] == '#'){
						tempField[row-1][col+1] = 'F';
					}
					//Diagonal upper left
					if(row > 0 && col > 0 && field[row-1][col-1] == '#'){
						tempField[row-1][col-1] = 'F';
					}
					//Diagonal lower right
					if(row < N-1 && col < N-1 && field[col+1][row+1] == '#'){
						tempField[col+1][row+1] = 'F';
					}
					//Diagonal lower left
					if(row < N-1 && col > 0 && field[row+1][col-1] == '#'){
						tempField[row+1][col-1] = 'F';
					}
				}
        	}
        	for(int row = 0; row < N; row++){
				for(int col = 0; col < N; col++){
					field[row][col] = tempField[row][col];
				}	
			}
    	}
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
		char field[102][102];
        for (int row = 0; row < N; row++) {
            fscanf(fp, "%s\n", &field[row]);
        }
        fscanf(fp, "\n");
        fireSimulation(N,M,field);
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
