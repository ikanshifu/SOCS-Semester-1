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
			if(skor[j].nilai<skor[pivotIdx].nilai){
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
	char name[105];
	for(int i = 0;i<N;i++){
		scanf("%d",&skor[i].nilai);
	}
	for(int i = 0;i<N;i++){
		scanf("%s",&skor[i].nama);
	}
	scanf("%d %s",&find,&name);
	quickSort(skor,0,N-1);
  	int position = linearSearch(skor,N,find);
	printf("%d %s %s\n",position, skor[position-2].nama,skor[position].nama);
	return 0;
}
