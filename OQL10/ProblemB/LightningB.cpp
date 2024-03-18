#include <stdio.h>
#include <string.h>

int main(){
	int T;
	//T = test case
	//N = Sebuah angka untuk menghitung ada berapa petir dalam durasi angka itu
	//A = durasi minimum satu petir
	//B = durasi maksimum satu petir
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp,"%d\n",&T);
	for(int tc = 1;tc<=T;tc++){
		int N,A,B,totalPetir=0;
		fscanf(fp,"%d %d %d\n",&N,&A,&B);
		char petir[N+5];
		int counter=0;
		fscanf(fp,"%s\n",petir);
		for(int i = 0;i<N;i++){
			if(petir[i]=='1'){
				counter++;			
			}else if(petir[i]=='0'||i==N-1){
				if(counter>=A && counter<=B){
					totalPetir++;
				}
				counter = 0;
			}
		}
		printf("Case #%d: %d\n",tc,totalPetir);
	}
	fclose(fp);
	return 0;
}
