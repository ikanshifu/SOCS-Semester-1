#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Latihan Soal UAS

struct Data{
	int angka;
	int jumlah;
};
void swap(Data *a,Data *b){
	Data temp = *a;
	*a = *b;
	*b = temp;
}

int partition(struct Data kalimat[], int low, int high){
	int pivotIdx = high;
	int i = low - 1;
	for(int j = low; j<high;j++){
		if(kalimat[j].jumlah>kalimat[pivotIdx].jumlah){
			i++;
			swap(&kalimat[i], &kalimat[j]);
		}else if(kalimat[j].jumlah==kalimat[pivotIdx].jumlah){
			if(kalimat[j].angka<kalimat[pivotIdx].angka){
				i++;
				swap(&kalimat[i], &kalimat[j]);
			}
		}
	}
	i++;
	swap(&kalimat[i],&kalimat[high]);
	return i;
}

void quickSort(struct Data kalimat[],int low, int high){
	if(low>=high){
		return;
	}
	int pi = partition(kalimat,low,high);	
	quickSort(kalimat,low,pi-1);
	quickSort(kalimat,pi+1,high);
}

int main(){
	FILE *fp = fopen("testdata.in","r");
	int N,M;
	//N = jumlah angka
	fscanf(fp,"%d\n",&N);
	struct Data kalimat[N];
	for(int i = 0;i<N;i++){
		fscanf(fp,"%d",&kalimat[i].angka);
	}
	fscanf(fp,"\n");
	for(int i = 0;i<N;i++){
		kalimat[i].jumlah = 0;
	}
	
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			if(kalimat[i].angka == kalimat[j].angka){
				kalimat[i].jumlah++;
			}
		}
	}
	quickSort(kalimat,0,N-1);
	for(int i = 0;i<N;i++){
		printf("%d ",kalimat[i].angka);
	}
	printf("\n");
	printf("%d\n",kalimat[0].angka);
	fclose(fp);
	return 0;
}
