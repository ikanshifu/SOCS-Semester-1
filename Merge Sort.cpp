#include <stdio.h>

//Lab 28 November 2023
/*Advances Sorting
	b.Merge Sort []
		-inti utamanya adalah dipecah dan digabungin lagi
*/

void printArr(int arr[], int size){
	for(int i= 0; i<size;i++){
		printf("%d ", arr[i]);
	}
}

void merge(int arr[],int low,int mid,int high){
	int leftSize = mid - low + 1;// ukuran array kiri
	int rightSize = high - mid;// ukuran array kanan
	
	
	int arrLeft[leftSize];
	int arrRight[rightSize];
	
	//Isi array kiri dan array kanan
	for(int i = 0;i<leftSize;i++){
		arrLeft[i] = arr[i + low];
	}
	
	for(int i = 0;i<leftSize;i++){
		arrRight[i] = arr[i + mid + 1];
	}
	
	//Declare Index
	int arrIdx = low;
	int arrLeftIdx = 0;
	int arrRightIdx = 0;
	
	//Ketika array di kiri dan array di kanan itu masih ada isi 
	while(arrLeftIdx < leftSize && arrRightIdx < rightSize){
		/*Jika, nilai di array kiri pada index sekarang lebih kecil
		dari nilai di array kanan pada index sekarang*/
		
		if(arrLeft[arrLeftIdx] < arrRight[arrRightIdx]){
			arr[arrIdx] = arrLeft[arrLeftIdx];
			arrIdx++;
			arrLeftIdx++;
		}else{
			arr[arrIdx] = arrRight[arrRightIdx];
			arrIdx++;
			arrRightIdx++;
		}		
	}
	
	while(arrLeftIdx<leftSize){
		arr[arrIdx] = arrLeft[arrLeftIdx];
		arrIdx++;
		arrLeftIdx++;	
	}
		
	while(arrRightIdx<rightSize){
		arr[arrIdx] = arrRight[arrRightIdx];
		arrIdx++;
		arrRightIdx++;
	}	
}

void mergeSort(int arr[], int low, int high){
	if(low>=high)return;//untuk keluar dari function
	//Proses membagi(divide)
	int mid = (high + low)/2;
	mergeSort(arr, low, mid);//kiri
	mergeSort(arr, mid+1, high);//kanan
	
	//Proses menggabungkan(conquer)
	merge(arr,low,mid,high);
}

int main(){
	int arr[] = {8,2,4,7,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,size-1);
	printArr(arr,size);	
	return 0;
}
