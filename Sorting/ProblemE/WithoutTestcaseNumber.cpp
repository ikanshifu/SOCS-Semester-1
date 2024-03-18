#include <stdio.h>
#include <string.h>

struct Kota{
	char nama[1005];
	double suhu;
	char metric;
}info[100];

void swap(Kota *a, Kota *b){
	Kota temp = *a;
	*a = *b;
	*b = temp; 
}
int partition(int low, int high){
	
	int pivotIdx = high;
	int i = low-1;
	
	for(int j=low;j<high;j++){
		if(info[j].metric=='F'){
			if((((info[j].suhu-32)*5)/9)<info[pivotIdx].suhu){
				i++;
				swap(&info[i],&info[j]);	
			}else if((((info[j].suhu-32)*5)/9)==info[pivotIdx].suhu){
				if(strcmp(info[j].nama,info[pivotIdx].nama)<0){
					i++;
					swap(&info[i],&info[j]);
				}
			}
		}else if(info[pivotIdx].metric=='F'){
			if(info[j].suhu<(((info[pivotIdx].suhu-32)*5)/9)){
				i++;
				swap(&info[i],&info[j]);	
			}else if(info[j].suhu==(((info[pivotIdx].suhu-32)*5)/9)){
				if(strcmp(info[j].nama,info[pivotIdx].nama)<0){
					i++;
					swap(&info[i],&info[j]);
				}
			}
		}else{
			if(info[j].suhu<info[pivotIdx].suhu){
				i++;
				swap(&info[i],&info[j]);	
			}
			else if(info[j].suhu==info[pivotIdx].suhu){
				if(strcmp(info[j].nama,info[pivotIdx].nama)<0){
					i++;
					swap(&info[i],&info[j]);
				}
			}
		}
	}
	i++;
	swap(&info[i],&info[pivotIdx]);
	return i;
}

void quickSort(int low, int high){
	if(low>=high){
		return;
	}
	int pi = partition(low,high);
	
	quickSort(low,pi-1);
	quickSort(pi+1,high);
}

int main(){
	FILE *fp = fopen("testdata.in","r");
	int count = 0;
	while(!feof(fp)){
		fscanf(fp," %[^#]#%lf#%c\n",&info[count].nama, &info[count].suhu,&info[count].metric);
		count++;
	}
	quickSort(0,count-1);
	for(int tc = 0;tc<count;tc++){
		printf("%s is %.2lf%c\n",info[tc].nama, info[tc].suhu, info[tc].metric);
	}
	fclose(fp);
	return 0;
}
