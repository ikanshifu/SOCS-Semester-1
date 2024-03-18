#include <stdio.h>
#include <string.h>

void swap(char str1[], int idx1, int idx2){
	char temp = str1[idx1];
	str1[idx1] = str1[idx2];
	str1[idx2] = temp;
}

int partition(char str1[], int low, int high){
	char pivot = str1[high];
	int i = low - 1;
	for(int j = low; j<high;j++){
		if(str1[j]<pivot){
			i++;
			swap(str1, i, j);
		}
	}
	i++;
	swap(str1, i, high);
	return i;
}

void quickSort(char str1[], int low, int high){
	if(low>=high){
		return;
	}
	int partitionIdx = partition(str1, low, high);
	quickSort(str1, low, partitionIdx -1 );
	quickSort(str1,partitionIdx +1, high );
}

int main(){
	int T;
	char str[1005],U[1005],str1[1005];
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		scanf("%s",str);
		scanf("%s",U);
		for(int i = 0;i<sizeof(str1);i++){
			str1[i] = '\0';
		}
		int count = 0;
		for(int i = 0;i<strlen(U);i++){
			for(int j = 0;j<strlen(str);j++){
				if(str[j]==U[i]){
					str1[count]=str[j];
					count++;
				}
			}	
		}
		quickSort(str1,0,count-1);
		printf("Case #%d: %s\n",tc,str1);
	}

	return 0;
}
