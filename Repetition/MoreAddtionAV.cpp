#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int result = 0;
	for(int j = 0; j<=N;j++){
		for(int l = 0; l<=N;l++){
			int b = N-j-l;
			if(b>=0){
				result++;
			}	
		}
	}
	printf("%d\n",result);
	return 0;
}
