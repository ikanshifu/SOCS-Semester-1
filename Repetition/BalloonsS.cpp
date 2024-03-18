#include <stdio.h>

int main(){
	int N,P;
	scanf("%d %d",&N,&P);
	int b,total=0;
	for(int i = 0; i<N; i++){
		scanf("%d",&b);
		if(P>b){
			total = total + 1;
		}
	}
	printf("%d\n",total);
	return 0;
}
