#include <stdio.h>
#include <string.h>

struct Data{
	char nama[15];
	int nilai;
};

void swap(Data *a, Data *b){
	Data temp = *a;
	*a = *b;
	*b = temp; 
}

int partition(struct Data skor[],int low, int high){
	
	int pivotIdx = high;
	int i = (low-1);
	
	for(int j=low;j<high;j++){
			if(skor[j].nilai>skor[pivotIdx].nilai){
				i++;
				swap(&skor[i],&skor[j]);
			}
	}
	i++;
	swap(&skor[i],&skor[pivotIdx]);
	return i;
}

void quickSort(struct Data skor[],int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(skor,low,high);
	
	quickSort(skor,low,partitionIdx-1);
	quickSort(skor,partitionIdx+1,high);
}

int binarySearch(struct Data skor[], int left, int right,int find){
	while(left<=right){
		int mid = left +(right - left)/2;
		if(skor[mid].nilai==find){
			return mid+1;
		}else if(skor[mid].nilai<find){
			left = mid + 1;
		}else if(skor[mid].nilai>find){
			right = mid - 1;
		}
	}
	return -1;
}

int linearSearch(struct Data skor[], int size, int find){
	for(int i = 0;i<size;i++){
		if(skor[i].nilai==find){
			return i+1;
		}
	}
	return -1;
}

int main(){
	int N;
	scanf("%d",&N);
	struct Data skor[N];
	int find;
	for(int i = 0;i<N;i++){
		scanf("%d",&skor[i].nilai);
	}
	for(int i = 0;i<N;i++){
		scanf("%s",&skor[i].nama);
	}
	scanf("%d",&find);
	quickSort(skor,0,N-1);
//  int position = binarySearch(skor,0,N-1,find);
  int position = linearSearch(skor,N,find);
	int part = 0;
	if(position%2==0){
		part = position/2;
	}else{
		part = (position+1)/2;
	}
	printf("%d %s %d\n",position, skor[position-1].nama, part);
	return 0;
}
