#include <stdio.h>

int main(){
	int N,M;
	//N jumlah angka yang ada dalam array
	//M jumlah target ankga yang mau dicari
	scanf("%d %d", &N,&M);
	int arr[N],target[M];
	//arr[N] adalah angka-angka dari array
	//target adalah angka yang mau dicari
	for(int i = 0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(int j = 0;j<M;j++){
		scanf("%d",&target[j]);
		for(int i = 0;i<N;i++){
			if(arr[i]==target[j]){
				arr[i]=0;
			}
		}
	}
	int maximum=0;
	for(int i = 0;i<N;i++){
		if(arr[i]>maximum){
			maximum = arr[i];
		}
	}
	if(maximum >0){
		printf("Maximum number is %d\n", maximum);	
	}else{
		printf("Maximum number is -1\n");
	}

	return 0;
}
