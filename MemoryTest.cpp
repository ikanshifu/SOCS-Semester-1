#include <stdio.h>
#include <string.h>
//Syntax Memory Test
/*
1.Linear Search
2.Quick Sort
3.Merge Sort
4.Struct
5.Binary Search
*/

//Linear Search
//kalau misalnya pengen ngebalikin angka kaya buat nyari index dari angka yang dicari, pake int, tapi kalau misalnya pengen balikin string atau struct kaya soal file
//sama search pake void
struct Siswa{
	char nama[1001];
	char nim[101];
}kelas1[1001];

void linearSearch(Siswa kelas1[], int size, char find[],int tc){
	for(int i = 0;i<size;i++){
		if(strcmp(kelas1.nim,find)==0){
			printf("Case #%d: %s\n",tc,kelas1[i].name);
			return;
		}	
	}
	printf("Case #%d: N/A\n",tc);			
}

//Quick Sort
//seandainya  pake struct
void swap(Siswa*a, Siswa*b){
	Siswa temp;
	//siswa temp adalah struct sementara untuk swapping, kalau swapping struct wajib pake pointer
	temp = *a;
	*a = *b;
	temp = *b;
}
int partition(struct Siswa arr[],int low, int high){
	struct Siswa pivot = arr[high];
	int i = low - 1;
	for(int j = low;j<high;j++){
		if(strcmp(arr[j].nim,pivot.nim)<0){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	i++;
	swap(&arr[i],&arr[high]);
	return;
}
void quickSort(struct Siswa arr[], int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(arr,low,high);
	quickSort(arr,low,partitionIdx-1);
	quickSort(arr,partitionIdx+1,high);
}
//kalau engga pake struct
void swap(arr[], int idx1,intidx2){
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(int arr[],int low, int high){
	int pivot = arr[high];
	int i = low - 1;
	for(int j = low;j<high;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr, i,j);
		}
	}
	i++;
	swap(arr, i,high);
	return;
}
void quickSort(arr[], int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(arr,low,high);
	quickSort(arr,low,partitionIdx-1);
	quickSort(arr,partitionIdx+1,high);
}
int main(){
	int arr[10] = {5,2,1,23,53,46,74,34,346,7}
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0,size-1);
	
	return 0;
}
