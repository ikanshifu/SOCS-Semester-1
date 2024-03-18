#include <stdio.h>
#include <string.h>

struct Video{
	char title[1001];
	char artist[1001];
	int viewer;
}song[101];

void swap(Video *a, Video *b){
	Video temp = *a;
	*a = *b;
	*b = temp; 
}

int partition(int low, int high){
	
	int pivotIdx = high;
	int i = low-1;

	for(int j=low;j<high;j++){
		if(song[j].viewer> song[pivotIdx].viewer){
			i++;
			swap(&song[i],&song[j]);
		}else if(song[j].viewer==song[pivotIdx].viewer){
			if(strcmp(song[j].title,song[pivotIdx].title)<0){
				i++;
				swap(&song[i],&song[j]);
			}
		}
	}
	i++;
	swap(&song[i],&song[pivotIdx]);
	return i;
}

void quickSort(int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(low,high);
	
	quickSort(low,partitionIdx-1);
	quickSort(partitionIdx+1,high);
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int count =0;
	while(!feof(fp)){
		fscanf(fp,"%[^#]#%[^#]#%d\n",&song[count].title, &song[count].artist, &song[count].viewer);
		count++;
	}
	quickSort(0,count-1);
	for(int tc = 0;tc<count;tc++){
		printf("%s by %s - %d\n",song[tc].title, song[tc].artist, song[tc].viewer);
	}
	fclose(fp);
	return 0;
}
