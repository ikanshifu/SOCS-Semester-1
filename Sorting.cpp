#include <stdio.h>
#include <string.h>
/*Materi - 21 Nov 2023: 
	a.Basic Sorting: mengurutkan sebuah array menjadi sebuah urutan.
	b.Bubble Sort: menukar dengan index yang ada di sebelahnya(bisa sebelum atau sesudah indext tersebut)/
					Sorting ini akan bolak-balik sampai tidak terjadi sort lagi yang menandakan bahwa loop akan selesai dan sudah berurutan.
					Sorting ini bersifat linear sehingga berjalan dari ujung ke ujung.

	
	c.Selection Sort: Mencari data terkecil atau terbesar(sesuai kriteria yang kita inginkan) lalu menukarkannya dengan
	current selected. Dia kan memeriksa satu-satu, apakah ada angka yang lebih besar/lebih sedang dipilih.
	
	d.Insertion Sort: Seperti mengocok kartu, kita mengeluarkan angka dari array dan dipindahkan ke posisi sesuai, dengan insertion sort 
	kita tidak perlu bolak-balik menukar karena dia tidak hanya melihat kiri dan kanan dari kartu yang sedang dipilih, tetapi membandingkan dengan semuanya.
	
	Ada sorting yang kurang efisien, untuk mengukur efesiennya, kita menggunakan time complexity
	*Time Complexity(berapa lama dieksekusinya perintah): diukur dengan menggunakan Big O Notation
	O(n) : n = dia iterasinya berapa kali
	Contoh: Function untuk print array
	loop sebanyak n kali dimana N : panjang arraynya
	O(N) worst case, average case, best case
	
	*Space Complexity: space yang diperlukan untuk mengeksekusi perintah
*/
void selectionSort(int arr[], int size){
	for (int i = 0; i<size;i++){
		int	 min = i;
		for(int j = i+1; j<size;j++){
			if(arr[min]<arr[j]){
				//update minimum terbaru
				min = j;
			}
		}
		//tukar min dengan index pertama yang unsorted
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void insertionSort(int arr[], int size){
	for(int i = 1; i < size; i++){
		int key = arr[i];
		//looping dicek di section array yang sorted
		int j = i - 1;
		while(j >= 0 && arr[j] < key){
			arr[j+1] = arr[j];
			j--;
		}
		//taruh key
		arr[j+1] = key;
	}
}

void bubbleSort(int arr[], int size){
	for (int i = 0; i<size;i++){
		int isSwapped = 0;
		for(int j = 0; j<size-i-1;j++){
			//cek angka yang bersebelahan
			if(arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				isSwapped = 1;
			}
		}
		if(isSwapped == 0){
			return;
		}
	}
}

void printArray(int arr[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(){
	int arr[] = {612, 123, 5, 2, 151, 15, 73};
	printArray(arr, 5);
	bubbleSort(arr, 5);
	selectionSort(arr, 5);
	insertionSort(arr, 5);
	printArray(arr, 5);
	return 0;
}
