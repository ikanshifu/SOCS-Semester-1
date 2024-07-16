#include<stdio.h>
#include<string.h>

int main(){
	//String Manipulation => memanipulasi char array
	//Bantuan string.h
	
	char x[100]="Lalala";
	
	//1. strlen => menghitung panjang dari string, return integer
	int panjangx = strlen(x); //Nilainya adalah 6
//	printf("%d",strlen(x));
	
	
	//2. strrev => membalik string
	strrev(x); //banned from socs
	printf("%s\n",x);
	
	//3. strcmp => mengecek kesamaan sebuah string
	//Kalau stringnya sama, outputnya 0
	if(strcmp("Andrew","Andrew ")<0){
		printf("Ada 2 Andrew\n");
	}
	//Kalau stringnya beda, dia bakal cek secara alfabetik
	if(strcmp("Andrew","Budi")<0){
		printf("Budi indexnya lebih besar\n");
	}
	if(strcmp("Budi","Andrew")>0){
		printf("Budi indexnya lebih besarrrrrrrrrr\n");
	}
	return 0;
}
