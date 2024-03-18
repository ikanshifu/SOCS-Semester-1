#include <stdio.h>
#include <string.h>

struct Data{
	char nama[35];
	int volume;
	int harga;
};

void swap(Data *a, Data *b){
	Data temp = *a;
	*a = *b;
	*b = temp; 
}

int partition(struct Data kopi[],int low, int high){
	
	int pivotIdx = high;
	int i = (low-1);
	
	for(int j=low;j<high;j++){
		if(kopi[j].harga<kopi[pivotIdx].harga){
			i++;
			swap(&kopi[i],&kopi[j]);
		}
	}
	i++;
	swap(&kopi[i],&kopi[pivotIdx]);
	return i;
}

void quickSort(struct Data kopi[],int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(kopi,low,high);
	
	quickSort(kopi,low,partitionIdx-1);
	quickSort(kopi,partitionIdx+1,high);
}

int main(){
	int N;
	scanf("%d",&N);
	struct Data kopi[N];
	for(int i = 0;i<N;i++){
		scanf(" %[^#]#%d",&kopi[i].nama,&kopi[i].volume);
		if(kopi[i].volume<=354){
			kopi[i].harga = 54000;
		}else if(kopi[i].volume<=473){
			kopi[i].harga = 57000;
		}else if(kopi[i].volume<=591){
			kopi[i].harga = 60000;
		}else if(kopi[i].volume>591){
			kopi[i].harga = 70000;
		}
	}
	
	quickSort(kopi,0,N-1);
	for(int i = 0;i<N;i++){
		printf("%s - %d\n",kopi[i].nama,kopi[i].harga);
	}
	return 0;
}
