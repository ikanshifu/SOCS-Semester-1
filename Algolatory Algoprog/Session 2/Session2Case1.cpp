#include<stdio.h>

int main(){
	//x untuk itung banyak angka
	int x , n; //n buat itung brp byk angkanya
	scanf("%d %d",&x,&n);
	int arr[x];//Karena sebanyak angka x int nya
	
	//Scanning ke array
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	
	//Cek tiap data di array
	for(int i=0;i<x;i++){
		//Kalau ketemu -1, kita harus ngapain? Ganti dengan logic yang tadi
		if(arr[i]==-1){
			int indexkiri = i-1;
			int iterate = n; //Kita tau sampe mana itungan kita berenti
			int count = 0, banyakbilangan = 0;
			//Iterasi kiri
			while(iterate != 0 && indexkiri>=0){
				//Kalau masih diperbolehkan
				count+=arr[indexkiri]; //Tambahkan nilai count sebesar value array indexkiri
				banyakbilangan++; //Banyakbilangan tambahin 1
				iterate--, indexkiri--;
			}
			//reset nilai iterate
			iterate = n;
			int indexkanan = i+1;
			while(iterate != 0 && indexkanan <x){
				if(arr[indexkanan]==-1){
					indexkanan++, iterate--;
				}else{
					count+=arr[indexkanan];
					indexkanan++, iterate--;
					banyakbilangan++;
				}
			}
			
			//Substitute nilai arr[i] dengan nilai count/banyakbilangan
			arr[i]=count/banyakbilangan;
		}
	}
	
	for(int i=0;i<x;i++){
		printf("%d",arr[i]);
		if(i!=x-1){
			printf(" ");
		}
	}
	printf("\n");
	
	
	
	return 0;
}
