#include <stdio.h>
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

double findMedian(int A[],int N){
	double median = 0;
	quickSort(A,0,N-1);
	int mid = N/2;
	if(N%2==1){
		median = A[mid];		
	}else{
		median = (A[mid]+A[mid-1])/2.0;
	}
	return median;
}

double findMean(int A[],int N){
	double mean,total=0;
	for(int i = 0;i<N;i++){
		total += A[i];
	}
	mean = total/N;
	return mean;
}

int main(){
	int T;
	scanf("%d",&T);
	int N;
	for(int tc = 1;tc<=T;tc++){
		scanf("%d",&N);
		int A[N];
		double median=0,mean=0;
		for(int i = 0;i<N;i++){
			scanf("%d", &A[i]);
		}
		printf("Case #%d:\n",tc);
		mean = findMean(A,N);
		median = findMedian(A,N);
		printf("Mean : %.2lf\n",mean);
		printf("Median : %.2lf\n",median);
	}
	return 0;
}
