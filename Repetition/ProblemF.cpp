#include <stdio.h>

int main(){
    int N,K;
    scanf("%d %d", &N,&K);
    for(int i=0; i<N; i++){
    	for(int j=0; j<N;j++){
    		printf("#");
		}     
		printf("\n");
    }
    printf("\n");
    for(int i=1; i<=N; i++){
    	if(i%K!=0){
    		for(int j=1; j<=N;j++){
    		printf(".");
		}     
		printf("\n");		
		}else{
    		for(int j=1; j<=N;j++){
    			printf("#");
			}     
			printf("\n");
		}
    }
    printf("\n");
    for(int i=1; i<=N; i++){
    	for(int j=1; j<=N;j++){
    		if(j%K!=0){
    			printf(".");
			}else{
	    		printf("#");		
			}
		}
		if(i == N) {
			break;
		} else {
			printf("\n");
		}
	}
	printf("\n");
    return 0;
}
