#include <stdio.h>
/*Objective: mencari tahu berapa lama waktu(variabel X)yang diperlukan untuk mengsortir hadiah 
secara ascending order namun hanya boleh menukar yang bersebelahan(bubble sort)
*/

void bubbleSort(int arr[], int size, int *totalMinutes,int X){
	for (int i = 0; i<size;i++){
		int isSwapped = 0;
		for(int j = 0; j<size-i-1;j++){
			//cek angka yang bersebelahan
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				isSwapped = 1;
				*totalMinutes = *totalMinutes+X;
			}
		}
		if(isSwapped == 0){
			return;
		}
	}
}

int main(){
	int T;
	scanf("%d",&T);
	int N,X;
	//N
	for(int tc = 1;tc<=T;tc++){
		scanf("%d %d",&N,&X);
		//N = jumlah hadiah
		//X = lama waktu yang diperlukan untuk menukar hadiah
		int A[N],totalMinutes=0;
		for(int i = 0; i<N;i++){
			scanf("%d",&A[i]);
		}
		bubbleSort(A,N,&totalMinutes,X);
		printf("Case #%d: %d\n",tc,totalMinutes);
	}
	return 0;
}
