#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Latihan Soal UAS

struct Data{
	char str[105];
	int konsonan;
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
		if(kalimat[j].konsonan<kalimat[pivotIdx].konsonan){
			i++;
			swap(&kalimat[i], &kalimat[j]);
		}else if(kalimat[j].konsonan==kalimat[pivotIdx].konsonan){
			if(strcmp(kalimat[j].str,kalimat[pivotIdx].str)<0){
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
	int N,M;
	//N = jumlah string
	//M = jumlah kata per string
	scanf("%d %d",&N,&M);
	struct Data kalimat[N];
	for(int i = 0;i<N;i++){
		scanf("%s",kalimat[i].str);
	}
	
	for(int i = 0;i<N;i++){
		kalimat[i].konsonan = 0;
	}
	
	for(int i = 0;i<N;i++){
		for(int j = 0;j<M;j++){
			if(kalimat[i].str[j]!='a'&&kalimat[i].str[j]!='i'&&kalimat[i].str[j]!='u'&&kalimat[i].str[j]!='e'&&kalimat[i].str[j]!='o'){
				kalimat[i].konsonan++;
			}
		}
	}
	quickSort(kalimat,0,N-1);
	for(int i = 0;i<N;i++){
		printf("%s\n",kalimat[i].str);
		printf("Jumlah konsonan: %d\n",kalimat[i].konsonan);
	}
	return 0;
}
