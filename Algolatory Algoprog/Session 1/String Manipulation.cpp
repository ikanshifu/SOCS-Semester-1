#include <stdio.h>
#include <string.h>

//String Manipulation => Data yang dapat mengangkut lebih dari satu data yang tipe datanya sama
	//1. strlen => mencari panjang dari string
	//2. strrev => mebalik sebuah string 
	//3. strcmp => mengecek kesamaan 2 string
int main(){
	char x[100] = "Hello";
	int panjangx = strlen(x);//memasukkan hasil starlen yaitu berupa integer ke dalam integer
	printf("%d",strlen (x));
	
	strrev(x);
	printf("%s\n",x);
	
	//Jika stringnya sama, maka outputnya 0
	if(strcmp("Jimi", "Jimi")==0){
		printf("Ada 2 Jimi\n")
	}
	//Jika kedua string berbeda, maka dia akan dicek secara alfabetik
	if(strcmp("Andrew", "Budi")<0){//yang dibandingin adalah huruf dari stringnya
	//jika andrew, budi artinya andrew - budi
	//karena huruf A lebih kecil dibanding B maka hasilnya kurang dari 0, oleh karena itu if nya dan bisa diprint
		printf("Budi lebih besar dibanding Andrew\n");
	}
	
	if(strcmp("Budi", "Andrew")>0){
			//jika budi, andrew artinya budi - andrew
			//karena huruf B besar dari A maka ketika dikurangin, hasilnya lebih dari 0 dan kondisi ifnya benar, oleh sebab itu bisa diprint
		printf("Budi lebih besar dari Andrew\n");
	}
	
	return 0;
}
