#include <stdio.h>
#include <stdlib.h>

//24 Okt 2023
//D.Recursion = sebuah function yang memanggil function itu sendiri
	//Base Case = sebuah pembatas untuk mengahkiri function(kondisi yang membuat recursion stop)
	//Faktorial
	//5! = 5 x 4 x 3 x 2 x 1
void printHello(int n){
	if(n == 0) return;//base case
	printf("%d. Hello\n", n);
	printHello(--n);//recursion
}

int faktorial(int n){
	if(n==1)return 1;
	else{
		return n * faktorial(n-1);
		//return 2 * faktorial(1);
	}
}

int fibo(int n){
	if(n == 0 || n == 1)return 1;
	else return fibo(n - 2) + fibo(n-1);
	//return dua angka sebelum dan 1 angka sebelum
}

int main(){
	printHello(10);
	
	int angka;
	scanf("%d", &angka);
	for(int i = angka - 1; i > 0; i--){
		angka *= i;
	}
	printf("Hasil Faktorial = %d\n", angka);
	printf("Hasil Faktorial = %d\n", faktorial(5));
	printf("Hasil fibonaci = %d\n", fibo(10));
	return 0;
}

