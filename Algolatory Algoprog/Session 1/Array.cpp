#include <stdio.h>
#include <string.h>

//Array => Data yang dapat mengangkut lebih dari satu data yang tipe datanya sama
int main(){
	int array[10]={1,2,3,4,5};//index dimulai dari 0-9;
	//1 akan tersimpan di index 0;
	int array2[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d", &array2[i][j]);
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d", array2[i][j]);
		}
	}
	
	return 0;
}
