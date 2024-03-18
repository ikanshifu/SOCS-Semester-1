#include <stdio.h>
/*
Session 10 - Searching
5 Desember 2023

	-Linear Search
	jadi dia akan pake for loop untuk cek satu-satu elemen array apakah ada yang sama kaya int yang dicari
	
	-Binary Search
	Dua cara: 
	1.Iterative for loop
	2.Recursive
	
	-Interpolation Search
	Mirip dengan binary search, menggunakan rumus persamaan garis atau Linear Interpolation
[1,2,3,4,5]
cari 3 index 2
	
value 1 2 3 4 5 
index 0 1 2 3 4 
*/

int linearSearch(int arr[], int size, int find){
	for(int i = 0;i<size;i++){
		if(arr[i]==find){
			return i;
		}
	}
	//elemen yang kita cari tidak ada
	return -1;
}

int iterativeBinarySearch(int arr[],int left,int right, int find){
	while(left<=right){
		int mid = left + (right-left)/2;
		if(arr[mid] ==find){
			return mid;
			
		}else if(arr[mid]<find){
			//kecilkan area search ke arah angka yang lebih besar
			left = mid + 1;
		}else{
			//kecilan area search kita ke arah kiri/arah value yang lebih kecil
			right = mid - 1;
		}
	}	
	return -1;
}

int recursiveBinarySearch(int arr[],int left,int right, int find){
	if(left<= right){
		//recursion akan tetap berjalan
		int mid = left + (right-left)/2;
		if(arr[mid]==find){
			return mid;
		}else if(arr[mid]< find){
			return recursiveBinarySearch(arr, mid+1,right, find);
		}else{
			return recursiveBinarySearch(arr, left,mid-1, find);
		}
	}
	return -1;
}

int iterativeInterpolationSearch(int arr[],int left,int right, int find){
	while(left<=right){
		int mid = left + ((find-arr[left])*(right-left)/(arr[right]-arr[left]));
		if(arr[mid] ==find){
			return mid;
		}else if(arr[mid]<find){
			//kecilkan area search ke arah angka yang lebih besar
			left = mid + 1;
		}else{
			//kecilan area search kita ke arah kiri/arah value yang lebih kecil
			right = mid - 1;
		}
	}	
	return -1;
}

int recursiveInterpolationSearch(int arr[],int left,int right, int find){
	if(left<= right){
		//recursion akan tetap berjalan
		int mid = left + ((find-arr[left])*(right-left)/(arr[right]-arr[left]));
		if(arr[mid]==find){
			return mid;
		}else if(arr[mid]< find){
			return recursiveInterpolationSearch(arr, mid+1,right, find);
		}else{
			return recursiveInterpolationSearch(arr, left,mid-1, find);
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int position;
//	position = linearSearch(arr, size,4);
//	position = iterativeBinarySearch(arr, 0,size, 4);
//	position = recursiveBinarySearch(arr, 0,size, 4);
//	position = iterativeInterpolationSearch(arr, 0,size-1, 4);
	position = recursiveInterpolationSearch(arr, 0,size-1, 4);
	printf("4 is at index %d", position);
	return 0;
}
