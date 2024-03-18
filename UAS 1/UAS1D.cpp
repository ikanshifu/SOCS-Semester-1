#include<stdio.h>

void fraktal_A(int x,int *count){
	int i;
	if (x <= 0){
		return;
	}else{
		fraktal_A(x - 1,count);
		for (i = 1; i <= x; i++){
			(*count)++;	
		}
		fraktal_A(x - 1,count);
	}
}

int main(){
	int X,count=0;
	scanf("%d",&X);
	fraktal_A(X,&count);
	count = count%1000000000;
	printf("%d\n",count);
	return 0;
}
