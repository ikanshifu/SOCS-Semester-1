#include <stdio.h>
void swap(long long arr[], long long idx1, long long idx2){
	long long temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(long long arr[], long long low, long long high){
	long long pivot = arr[high];
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

void quickSort(long long arr[], long long low, long long high){
	if(low>=high)return;//untuk keluar dari function
	int partitionIdx = partition(arr, low, high);
	quickSort(arr, low, partitionIdx -1 );//rekursi ke kiri
	quickSort(arr,partitionIdx +1, high );
}

int main() {
    int N;
    scanf("%d", &N);
	long long X[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &X[i]);
    }
    quickSort(X,0,N-1);
    long long Y;
    long long counter=0;
    scanf("%lld", &Y);
	for (int i = 0; i < N; i++) {
		if(Y>=X[i]){
		   	Y = Y-X[i];	
		   	counter++;
		}
    }
    printf("%lld\n",counter);
    return 0;
}

