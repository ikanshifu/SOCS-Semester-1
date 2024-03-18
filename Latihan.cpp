#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Latihan UAS:
1.Quick Sort(done)
2.Merge Sort
3.Other Sort
4.Linear Search(done)
5.Binary Search(done)
*/

void swap(int a,int idx1, int idx2){
	int temp = a[idx1];
	a[idx1] = a[idx2];
	a[idx2] = temp;
}

int partition(int a[], int low, int high){
	int pivot = a[high];
	int i = low - 1;
	for(int j = 0;j<high;j++){
		if(a[j]<pivot){
			i++;
			swap(a,i,j);
		}
	}
	i++;
	swap(a,i,high);
	return i;
}

void quickSort(int a[], int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(a, low ,high);
	quickSort(a,low,partitionIdx-1);
	quickSort(a,partitionIdx+1,high);
	
}

int linearSearch(int a[],int find){
	for(int i = 0;i<100;i++){
		if(find == a[i]){
			return i;
		}
	}
	return -1;
}

//iterative
int binarySearch(int a[],int left, int right, int find){
	while(left <= right){
		int mid = left + (right-left)/2;
		if(a[mid]==find){
			return mid;
		}else if(a[mid]<find){
			left = mid + 1;
		}else if(a[mid]>find){
			right = mid - 1;
		}
	}
	return -1;
}

int main (){
	int size = 10;
	//	int size = sizeof(arr)/sizeof(arr[0]); kalo mau cari size array
	int a[size];
	int find;
	for(int i = 0;i<size;i++){
		a[i] = i+1;
	}
	printf("Enter number which index's you want to find[1-100]: ");
	scanf("%d", &find);
//	int position = linearSearch(a,find);
	int position = binarySearch(a,0,size-1,find);
	printf("The number's index is : %d", position);
	return 0;
}
