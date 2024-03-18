#include<stdio.h>

int main(){
	FILE *fp = fopen("testdata.in","r");
	int A,total,min=0,max=0;
	int i = 0;
	int j = 0;
	while(!feof(fp)){
		fscanf(fp,"%d",A)
		i++;
		j++;
	}
	
	min = total[0];
	max = total[0];
	for(int i = 0;i<1000;i++){
		total[i]= 0;
		for(int j = 0;j<1000;j++){
			scanf("%d",&A[i][j]);
			A[i][j]+=total[i];
		}
		
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
