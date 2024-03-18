#include <stdio.h>

void swap(int A[], int idx1, int idx2){
	int temp = A[idx1];
	A[idx1] = A[idx2];
	A[idx2] = temp;
}
int partition(int A[], int low, int high){
	int pivot = A[high];
	int i = low -1;
	for(int j = low;j<high;j++){
		if(A[j]<pivot){
			i++;
			swap(A,i,j);
		}	
	}
	i++;
	swap(A,i,high);
	return i;
}
void quickSort(int A[],int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(A,low, high);
	quickSort(A,partitionIdx+1, high);
	quickSort(A,low, partitionIdx-1);
}

int main(){
	int N;
	scanf("%d",&N);
	int A[N];
	for(int i = 0; i<N;i++){
		scanf("%d",&A[i]);
	}
	quickSort(A,0,N-1);
	for(int i = (N/2)+1; i<N;i++){
		printf("%d",A[i]);
		if(i<N-1){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
