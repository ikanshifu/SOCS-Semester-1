#include <stdio.h>

int main(){
	int T,N;
	scanf("%d", &T);
	scanf("%d", &N);
	int A;
	int biggest =  0;
	for(int i = 0; i<T;i++){
		int line_sum=0;
		for(int j=0; j<N;j++){
			A = 0;
			scanf("%d",&A);
			line_sum = line_sum + A;	
			if(line_sum>biggest){
				biggest = line_sum;
			}
		}
	}
	printf("%d\n", biggest);
	return 0;
}
