#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target){

//	int mid = (low + high)/2; kurang disarankan karena seandainya angkanya kebesaran, bisa overflow
	int mid = low + (high - low)/2;
		if(arr[mid]== target&&(arr[mid]>arr[mid-1]||mid==0)){
		return mid;
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
	int N,M;
	//N jumlah angka yang ada dalam array
	//M jumlah target ankga yang mau dicari
	scanf("%d %d", &N,&M);
	int arr[N],target[M];
	//arr[N] adalah angka-angka dari array
	//target adalah angka yang mau dicari
	for(int i = 0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<M;i++){
		scanf("%d",&target[i]);
		int position = binarySearch(arr,0,N-1,target[i]);
		if(position!=-1){
			printf("%d\n",position+1);	
		}else{
			printf("%d\n",position);	
		}
	}
	return 0;
}
