#include <stdio.h>

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
	if(low>=high)return;
	int partitionIdx = partition(arr, low, high);
	quickSort(arr, low, partitionIdx -1 );
	quickSort(arr,partitionIdx +1, high );

}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);
        int V[N];
        long long maximum=0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &V[i]);
        }
       	
       	quickSort(V,0,N-1);

        maximum = V[N-2] + V[N-1];

        printf("Case #%d: %lld\n", tc, maximum);
    }

    return 0;
}

