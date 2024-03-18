#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1; tc<=T;tc++){
		int N,A[1001],oddCounter=0, evenCounter=0;
		scanf("%d",&N);
		for(int i = 0;i<N;i++){
			scanf("%d",&A[i]);
			if(A[i]%2==0){
				evenCounter++;
			}else{
				oddCounter++;
			}
		}
		printf("Odd group : %d integer(s).\n",oddCounter);
		printf("Even group : %d integer(s).\n",evenCounter);
		printf("\n");
	}
	return 0;
}
