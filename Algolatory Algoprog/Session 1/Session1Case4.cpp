#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int mtx[n][n];
	int max=0,coorx,coory,count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&mtx[i][j]);
			if(mtx[i][j]>max){
				max=mtx[i][j];
				coorx=i;
				coory=j;
			}
		}
	}
	
	int result[n*n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=coorx && j!=coory){
				result[count]=mtx[i][j];
				count++;
			}
		}
	}
	
	printf("ans: ");
	for(int i=0;i<count;i++){
		printf("%d",result[i]);
		if(i!=count-1){
			printf(" ");
		}
	}
	printf("\n");	
	
	return 0;
}

