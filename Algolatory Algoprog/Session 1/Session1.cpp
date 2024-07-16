#include<stdio.h>

int main(){
	//Repetition => Sebuah kondisi / statement yang akan berulang
	//Sampai kapan? sampai kondisi tidak memenuhi
	
	//Repetition / Looping itu ada beberapa jenis
	
	//1. While Loop
	//while(condition){statement}
	int x = 5;
	while(x>=5){
		printf("Lol\n");
		x = x - 1; //menurunkan nilai x
	}
	
	//2. Do While Loop
	//Perbedaan : behavior, do while bakal ngelakuin statement minimal sekali
	int y = 10;
	do{
		printf("Haha\n");
	}while(y<10);
	
	//Kegunaan Do While : Validation
	int angka;
	do{
		printf("Sebut angka Kamu[minimal 5] :");
		scanf("%d",&angka);
	}while(angka<5);
	
	
	//3. For Loop (ada Nested Loop)
	//Sebuah looping yang akan berjalan ketika sebuah kondisi statement masih memenuhi syarat
	//format : for(int i=0;i<5;i++){statement}
	//Misal : angka = 6
	for(int i=0,j=angka;i<angka;i++,j--){
		int nilai = 1;
		while(nilai < 5){
			printf("Hahaha\n");
			nilai++;
		}
		
		printf("\n");
		//i++ => setelah dibaca(i++), nilai i akan bertambah 1
	}
	
	
	return 0;
}
