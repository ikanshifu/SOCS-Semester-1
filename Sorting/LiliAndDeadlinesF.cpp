#include <stdio.h>
#include <string.h>

struct Sekolah{
	char nama[15];
	long long tanggal;
}mapel[100];

void swap(Sekolah *a, Sekolah *b){
	Sekolah temp = *a;
	*a = *b;
	*b = temp; 
}
int partition(long long low, long long high){
	
	long long pivotIdx = high;
	long long i = (low-1);
	
	for(int j=low;j<high;j++){
		if(mapel[j].tanggal<mapel[pivotIdx].tanggal){
			i++;
			swap(&mapel[i],&mapel[j]);
		}else if(mapel[j].tanggal == mapel[pivotIdx].tanggal && strcmp(mapel[j].nama, mapel[pivotIdx].nama) < 0){
			i++;
			swap(&mapel[i],&mapel[j]);
		}
	}
	i++;
	swap(&mapel[i],&mapel[pivotIdx]);
	return i;
}

void quickSort(long long low, long long high){
	if(low>=high){
		return;
	}
	long long pi = partition(low,high);
	
	quickSort(low,pi-1);
	quickSort(pi+1,high);
}

int main(){
	int T;
	scanf("%d", &T);
	for(int tc = 0;tc<T;tc++){
		scanf("%s %lld",&mapel[tc].nama, &mapel[tc].tanggal);getchar();
	}
	quickSort(0,T-1);
	for(int tc = 0;tc<T;tc++){
		printf("%s\n",mapel[tc].nama);
	}
	return 0;
}
