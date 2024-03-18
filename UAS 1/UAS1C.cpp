#include<stdio.h>

int binarySearch2(int arr[], int low, int high, int target){
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]==target){
			return mid+1;
		}else if(arr[mid]<target){
			low = mid +1;
		}else if(arr[mid]>target){
			high = mid - 1;
		}
	}
	return -1;
}

int binarySearch(int arr[], int low, int high, int target){

	int mid = low + (high - low)/2;
	if(arr[mid] == target&&(arr[mid]>arr[mid-1]||mid==0)){
		return mid+1;
	}
	
	if (low >= high){
		return -1;
	}
	
	if(target>arr[mid]){
		return binarySearch(arr,mid+1,high,target);
	}else{
		return binarySearch(arr,low,mid-1,target);
	}
}
int main(){
	int N,Q;
	//N jumlah angka yang ada dalam array
	//Q jumlah target ankga yang mau dicari
	scanf("%d %d", &N,&Q);
	int A[N],target[Q];
	//A[N] adalah angka-angka dari array
	//target adalah angka yang mau dicari
	for(int i = 0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(int i = 0;i<Q;i++){
		scanf("%d",&target[i]);
		int position = binarySearch2(A,0,N-1,target[i]);
		printf("%d\n",position);	
	}
	return 0;
}
