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
		int N,A,B,counter,totalPetir=0;
		fscanf(fp,"%d %d %d\n",&N,&A,&B);
		char petir[N+5];
		fscanf(fp,"%s\n",petir);
		for(int i = 0;i<N;i++){
			counter=0;
			while(petir[i]=='1'&&i<N){
				counter++;
				i++;	
			}
			if(counter>=A && counter<=B){
				totalPetir++;
			}
		}
		printf("Case #%d: %d\n",tc,totalPetir);
	}
	fclose(fp);
	return 0;
}
