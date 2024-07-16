#include <stdio.h>
#include <string.h>
//Tipe soal missing value:
//inti dari soal ini adalah ada sebuah array angka, 
int main(){
	int x, n;//x untuk hitung banyak angka
	//n untuk hitung berapa banyak angkanya
	scanf("%d %d", &x, &n);
	int arr[x];//karena sebanyak angka x intnya
	
	//Scanning ke array
	for(int i = 0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0;i<n;i++){
		if(arr[i]==-1){
			int indexkiri = i-1;
			int iterate = n; //Kita tau sampe mana itungan kita berhenti
			int count = 0, banyakbilangan = 0;
			while(iterate !=0 && indexkiri>=0){
				count +=arr[indexkiri];
				banyakbilangan++;
				iterate--,indexkiri--;
			}
			iterate = n;
			int indexkanan = i+1;
			while(iterate != 0 && indexkanan<=x){
				if(arr[indexkanan]==-1){
					indexkanan++, iterate--;
				}else{
					count += arr[indexkanan];
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
