#include<stdio.h>
#include<string.h>

//Array && string manipulation
int main(){
	//Array => data yang dapat mengangkut lebih dari satu data yang tipe datany sama
	int array[10] ={1,2,3,4,5};
	//zero-indexing
//	printf("%d",array[0]);
	
	int array2[5][5];
	//Untuk isi data
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&array2[i][j]);
		}
	}
	
	//Print isinya
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",array2[i][j]);
		}
		printf("\n");
	}
//	char x[100]="Cennn"; 
//	printf("%d",strlen(x));
	return 0;
}
