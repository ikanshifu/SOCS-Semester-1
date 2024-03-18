#include<stdio.h>

int main(){
	FILE *fp = fopen("testdata.in","r");
	int A[100][100],total[100],min=0,max=0;
	for(int i = 0;i<100;i++){
		total[i]=0;
		for(int j = 0;j<100;j++){
			fscanf(fp,"%d",&A[i][j]);
			A[i][j]+=total[i];
		}
	}
	
	min = total[0];
	max = total[0];
	for(int i = 0;i<100;i++){
		if(total[i]>max){
			max = total[i];
		}
		if(total[i]<min){
			min = total[i];
		}
	}
	printf("%d\n",max-min);
	fclose(fp);
	return 0;
}
