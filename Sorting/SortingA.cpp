#include <stdio.h>

void swap(int N[], int idx1, int idx2){
	int temp = N[idx1];
	N[idx1] = N[idx2];
	N[idx2] = temp;
}
int partition(int N[], int low, int high){
	int pivot = N[high];
	int i = low -1;
	for(int j = low;j<high;j++){
		if(N[j]<pivot){
			i++;
			swap(N,i,j);
		}	
	}
	i++;
	swap(N,i,high);
	return i;
}
void quickSort(int N[],int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(N,low, high);
	quickSort(N,partitionIdx+1, high);
	quickSort(N,low, partitionIdx-1);
}

int main(){
	int T;
	scanf("%d",&T);
	int N[T];
	for(int tc = 0; tc<T;tc++){
		scanf("%d",&N[tc]);
	}
	quickSort(N,0,T-1);
	
	int selisihMax = 0;
    for (int i = 1; i < T; i++) {
        int selisih = N[i] - N[i - 1];
        if (selisih > selisihMax) {
            selisihMax = selisih;
        }
    }
    int counter = 0;
    for (int i = 1; i < T; i++) {
        int selisih = N[i] - N[i-1];
        if (selisih == selisihMax) {
        	if(counter > 0){
        		printf(" ");
			}
            printf("%d %d", N[i-1], N[i]);
            counter++;
        }
    }
    printf("\n");
	return 0;
}
