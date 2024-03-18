#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i = 0; i<T;i++){
		int A,B,C;
		scanf("%d %d %d", &A, &B, &C);
		if(A+C>B&& B+C>A && A+B>C){
			printf("BISA\n");
		}else{
			printf("TIDAK BISA\n");
		}
	}
	
	return 0;
}
