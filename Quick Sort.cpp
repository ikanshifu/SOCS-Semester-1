#include <stdio.h>

//Lab 28 November 2023
/*Advances Sorting

	a.Quick Sort []
	-Quick sort memiliki pivot yang biasanya di bagian belakang deretan angka
	-Pivot adalah batasan akhir dari deretan angka
	-Intinya dia menukar-nukar antara i dan j, low dan high
	
	b.Merge Sort []
*/

void printArr(int arr[], int size){
	for(int i= 0; i<size;i++){
		printf("%d ", arr[i]);
	}
}

void swap(int arr[], int idx1, int idx2){
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low - 1;
	for(int j = low; j<high;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr, i, j);
		}
	}
	i++;
	swap(arr, i, high);
	return i;
}

void quickSort(int arr[], int low, int high){
	if(low>=high)return;//untuk keluar dari function
	int partitionIdx = partition(arr, low, high);
	quickSort(arr, low, partitionIdx -1 );//rekursi ke kiri
	quickSort(arr,partitionIdx +1, high );
}

int main(){
	int arr[] = {8,2,4,7,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,size-1);
	printArr(arr,size);	
	return 0;
}
