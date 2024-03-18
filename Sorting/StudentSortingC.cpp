#include <stdio.h>
#include <string.h>

struct ruangan{
	char id[11];
	char name[1001];
};


void swap(struct ruangan*a, struct ruangan*b){
	ruangan temp = *a;
	*a = *b;
	*b = temp;
}

int partition(struct ruangan arr[], int low, int high){
	struct ruangan pivot = arr[high];
	int i = low - 1;
	for(int j = low; j<high;j++){
		if(strcmp(arr[j].id,pivot.id)<0){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	i++;
	swap(&arr[i], &arr[high]);
	return i;
}

void quickSort(struct ruangan arr[], int low, int high){
	if(low>=high)return;
	int partitionIdx = partition(arr, low, high);
	quickSort(arr, low, partitionIdx -1 );
	quickSort(arr,partitionIdx +1, high );

}


int main(){
	int N;
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp,"%d\n",&N);
	struct ruangan students[N]; 
	for(int i=0;i<N;i++){
	
	fscanf(fp, "%s %[^\n]\n", students[i].id, students[i].name);
	}
    quickSort(students,0,N-1);
	
	for(int i = 0; i < N; i++){
		printf("%s %s\n",students[i].id, students[i].name);
	}
	
	fclose(fp);
	
	return 0;
}
