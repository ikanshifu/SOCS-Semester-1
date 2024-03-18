#include <stdio.h>
#include <stdlib.h>

void printArr(int arr[], int size){
	for(int i= 0; i<size;i++){
		printf("%d ", arr[i]);
	}
}

void swap(int arr[], int idx1, int idx2){
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low - 1;
	for(int j = low; j<high;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr, i, j);
		}
	}
	i++;
	swap(arr, i, high);
	return i;
}

void quickSort(int arr[], int low, int high){
	if(low>=high)return;//untuk keluar dari function
	int partitionIdx = partition(arr, low, high);
	quickSort(arr, low, partitionIdx -1 );//rekursi ke kiri
	quickSort(arr,partitionIdx +1, high );
}

void matchMaking(int tc, int N, int MMR[], int F) {
    quickSort(MMR,0,N-1);
    int mmrA = -1;
    int mmrB = -1;
    int batas = 9999;

    int flag = -1;
    for (int i = 0; i < N; i++) {
        if (MMR[i] == F) {
            flag = i;
            break;
        }
    }

    if (flag != -1) {
        for (int i = 0; i < N; i++) {
            if (MMR[i] > F && MMR[i] - F < batas) {
                batas = MMR[i] - F;
                mmrA = F;
                mmrB = MMR[i];
            }
        }

        if (mmrA == -1 && mmrB == -1) {
            for (int i = N - 1; i >= 0; i--) {
                if (MMR[i] < F) {
                    mmrA = MMR[i];
                    mmrB = F;
                    break;
                }
            }
        }
    }

    if (mmrA == -1 && mmrB == -1) {
        printf("CASE #%d: -1 -1\n", tc);
    } else {
        printf("CASE #%d: %d %d\n", tc, mmrA, mmrB);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int N, F;
        scanf("%d", &N);
        int MMR[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &MMR[i]);
        }

        scanf("%d", &F);
        matchMaking(tc, N, MMR, F);
    }

    return 0;
}

