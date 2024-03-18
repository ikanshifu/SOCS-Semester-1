#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int tc = 1;tc<=T;tc++){
		int N;
		scanf("%d",&N);
		printf("Case #%d:\n",tc);
		for(int i = 1;i<=N;i++){
			for(int j = 1;j<=N;j++){
				if(j<=N-i){
					printf(" ");
				}else{	
					if((i+j)%2==0){
						printf("*");
					}else if((i+j)%2==1){
						printf("#");	
					}
			}
		}
	printf("\n");
	}
}
	return 0;
}
