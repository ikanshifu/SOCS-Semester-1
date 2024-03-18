#include <stdio.h>

/*Data/variabel yang disimpan ke sebuah struktur sehingga bisa diakses secara
masing-masing ataupun per kelompok. Variabel yang disimpan dengan
nama yang sama dibedakan dengan indexnya. Contoh: Umur[10] = 10(i0, 12(i1)
index selalu dimulai dari 0. Array dapat diilustrasikan sebagai sebuah kotak*/

/*Array bersifat homogenus, jadi setiap data harus memiliki data type yang sama
Semua data dapat diakses secara langsung, jadinya tidak harus berurutan
Contoh: Umur[3] = {16, 18, 20}
-umur pertama yaitu 16 berada di kotak 0 atau i0
-umur kedua yaitu 18 berada di kotak 1 atau i1
-umur ketiga yaitu 20 berada di kotak 2 atau i2*/

//Syntax => <data type>nama array[value dimension atau jumlah/besaran data];
//[] merupakan operator index
//array dapat dibuat tanpa value dimension/inisialisasi(misalnya int B[]={5,23,45,23,..})

//Array 1D
	//Contoh: int A[10] ={1,2,3,5,6,7,8,dst hingga total 10 angka} maka A[0] = 1, A[1]= 2, dst.
	
	/*inisialisasi: for(int i = 0; i<5;i++)
	artinya A[i]=0*/
	
	/*cara mengakses: contohnya index=2 atau data ketiga dari A[5]
				      *(A+2) atau A[2]
				    A bisa dibilang sama dengan &A[0] atau sebuah pointer
				    konstan yang menunjuk ke elemen pertama/index 0 dari array*/
	/*Cara Print: printf("%d", A[2]); atau printf("%d", *(A+2)); */
	/*Cara assign: A[6]=17, A[3]=12, A[2] = A[6]-A[3]*/
int main() {
	int n;
	return 0;
}
