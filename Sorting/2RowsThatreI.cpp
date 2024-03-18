#include <stdio.h>

//Objective: menentukan perbedaan tinggi yang paling kecil(optimal) antara murid yang duduk sebelahan

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

int main() {
    int T;
    scanf("%d", &T);
    int N;
    //jumlah murid(harus selalu genap)
    for(int tc=1;tc<=T;tc++){
    	scanf("%d",&N);
    	if(N%2==1){
    		printf("Error! number must be even!\n");
    		return 0;
		}
    	int A[N];
    	for(int i = 0;i<N;i++){
    		scanf("%d",&A[i]);
		}
		quickSort(A,0,N-1);
		int maxLength = 0;
	 	int mid = N/2;
	 	int left = mid;
	 	int right = N-mid;
	 	for(int i = 0;i<left-1;i++){
    		if(A[i+1]-A[i]>maxLength){
    			maxLength = A[i+1]-A[i];
			}
		}
		for(int j = 0;j<right-1;j++){
    		if(A[mid+j+1]-A[mid+j]>maxLength){
				maxLength = A[mid+j+1]-A[mid+j];
			}
		}
    	printf("Case #%d: %d\n",tc,maxLength);
	}
    return 0;
}

