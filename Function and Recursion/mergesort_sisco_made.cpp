#include<stdio.h>

void merge(int arr[],int left,int middle,int right){
	int nilaileft= middle - left + 1;
	int nilairight = right - middle;
	
	int angkaleft[nilaileft];
	int angkaright[nilairight];
	
	for(int i=0;i<nilaileft;i++){
		angkaleft[i] = arr[left+i];
	}
	for(int i=0;i<nilairight;i++){
		angkaright[i] = arr[middle+i+1];
	}
	int indexleft = 0;
	int indexright = 0;
	int mainindex = left;
	
	while(indexleft < nilaileft && indexright < nilairight){
		if(angkaleft[indexleft] < angkaright[indexright]){
			arr[mainindex] = angkaleft[indexleft];
			indexleft++;
			mainindex++;
		}
		else{
			arr[mainindex] = angkaright[indexright];
			indexright++;
			mainindex++;
			
		}
	}
	while(indexleft < nilaileft){
		arr[mainindex] = angkaleft[indexleft];
		indexleft++;
		mainindex++;
	}
	while(indexright < nilairight){
		arr[mainindex] = angkaright[indexright];
		indexright++;
		mainindex++;
	}
}

void mergesort(int arr[],int left,int right){
	
	if(left < right){
		int middle = (left+right)/2;
		
		mergesort(arr,left,middle);
		mergesort(arr,middle+1,right);
		
		merge(arr,left,middle,right);
	}
}

int main(){
	
	int arr[10] = {4, 56, 2, 61, 23, 62, 53, 1 ,21, 8};
	int n = 10;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
