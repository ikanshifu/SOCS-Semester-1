#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		int N;
		scanf("%d", &N);
		int arr[N];
		for(int i = 0;i<N;i++){
			scanf("%d", &arr[i]);	
		}
		printf("Case #%d:",tc);
		for(int i = N-1;i>=0;i--){
			printf(" %d", arr[i]);	
		}
		printf("\n");
	}
	return 0;
}
