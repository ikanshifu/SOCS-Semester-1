#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int b = 7;//Global Variable : artinya dapat digunakan dimana saja, di function mana pun

//24 Okt 2023
//A.Function : Sekumpulan code yang akan dijalankan jika kita memanggilnya(kelebihan:bisa digunakan kembali)
		/*
		[return type][nama_function](parameter....){

		}
		*/
	//Return Type
		//1.void = tidak mengembalikan apa-apa
		//2.int = mengembalikan nilai berupa integer.
	//Function Prototype : sebuah function yang hanya mendeklarasikan, inisialisasi dilakukan setelahnya
		//contoh:int/long/long/long long pertambahan(int, int);[deklarasi]
		/*  	pertambahan(int angka1, int angka2){
			angka1+angka2;[insialisasi]					
			}
		*/
		
//B.Scope(tempat diakses)
	//Global Variable[line 4]
	//Local Variable[line 51]
	//Jika ada variable yang terdapat di local dan global, maka yang akan terprint adalah yang local, karena variable global berada di urutan pertama, valuenya akan tertimbun dengan variabel lokal
	
void function(){
	char name[255] = "Adrian";
	printf("%s\n", name);
}

void greetings(){
	printf("Hello World\n");getchar();
}

void introduce(char nama[],int umur){
	printf("Nama saya %s umur saya %d\n", nama, umur);getchar();
}

void goodbye(){
	printf("Goodbye\n");getchar();
	return;//biasanya engga ditulis karena ujung2nya hasilnya sama aja
}

int pertambahan(int angka1, int angka2){
	return angka1 + angka2;
}

int main (){
	int choice;//merupakan local variable, hanya bisa digunakan di function main
	do{
	printf("1.Greetings\n");
	printf("2.Introduction\n");	
	printf("3.Goodbye\n");
	printf("4.Pertambahan\n");
	printf("5.Function\n");
	printf("Choose a number[1-5]: ");	
	scanf("%d", &choice);getchar();
	system("cls");
	switch(choice){
		case 1:
			greetings();
			system("cls");
			break;
		case 2:
			introduce("Dika", 18);
			system("cls");
			break;
		case 3:
			goodbye();
			system("cls");
			break;
		case 4:
			printf("%d\n", pertambahan(5, 8));getchar();
			system("cls");
			break;
		case 5:
			function();
			system("cls");
		}
	}while(choice>=1 && choice<=5||choice<1||choice>5);
	return 0;
}

