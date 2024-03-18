#include <stdio.h>

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

int main(){
	int T;
	scanf("%d",&T);
	int result,S[25];
	for(int tc = 1;tc<=T;tc++){
		result = 0;
		for(int i=0;i<25;i++){
			scanf("%d",&S[i]);
			result = result + S[i];
		}
		mergeSort(S,0,24);
		printf("Case #%d: ",tc);
		int Y1 = S[0]/2;
		int Y5 = S[24]/2; 
		int Y2 = S[1] - Y1;
		int Y4 = S[23] - Y5;
		int Y3 = (result - 10*(Y1 + Y2 + Y4 + Y5))/10;
		printf("%d %d %d %d %d", Y1, Y2, Y3, Y4, Y5);
		printf("\n");
	}
	return 0;
}
