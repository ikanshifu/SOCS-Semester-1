#include <stdio.h>

//Pointer adalah sebuah variabel yang menyimpan alamat dari variabel lainnya
int main() {
	int n;
	//Pointer to Variable => <data type> *[pointer name];
	int *pointer_n;
	pointer_n = &n;//artinya n = 5;
	*pointer_n = 5;//artinya n = 5;
	
	//Pointer to pointer => <data type> **[pointer to pointer name];
	int *pointer_n;
	int **pointer_pointer_n;
	n=5
	pointer_n = &n;
	pointer_pointer_n = &pointer_n;
	**pointer_pointer_n = 5;//artinya n=5, *pointer_n = 5;
	//note: kalau pointer nunjuk ke alamat variabel gak usah pake *di depannnya
	//      tapi kalau misalnya nunjuk value/nilai dari variabel, pake * di depannya
	return 0;
}
