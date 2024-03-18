#include<stdio.h>
#include<string.h>
//Di soal ini, yang perlu diperhatikan hanya tangga kanan dan kiri
//Jojo berada di lantai satu yang penuh dengan gas
//1 melambangkan tangga
//setiap tangga hanya bisa digunakan sekali yaitu untuk naik atau turun

int main(){
	int T;
	scanf("%d", &T);
	int N, K,tanggaKiri,tanggaKanan;
	char lorong[10005];
	for(int tc = 1; tc<=T;tc++){
		scanf("%d %d", &N, &K);
		scanf("%s",lorong);
		tanggaKiri=-1,tanggaKanan=-1;
		//alasan kenapa tanggaKiri dan tanggaKanan dibikin -1 adalah karena tangga dapat muncul di index 0, sedangkan -1 tidak bisa dipakai
		
		//tangga kiri
		for (int i = 0;i<N;i++){
			if(lorong[i] == '1'){
				tanggaKiri = i;
				break;
			}
		}
		//tangga kanan
		for (int i = N-1;i>=0;i--){
			if(lorong[i] == '1'){
				tanggaKanan = i;
				break;
			}
		}
		//kalau banyak tangganya <=1
		if((tanggaKiri == tanggaKanan) && K >= N){
			printf("Case #%d: Alive\n",tc);
		}else if(tanggaKiri != tanggaKanan && (tanggaKiri+1)<=K && (N-tanggaKanan)<= K){
			printf("Case #%d: Alive\n",tc);
		}else{
			printf("Case #%d: Dead\n",tc);
		}
	}
	
	return 0;
}
