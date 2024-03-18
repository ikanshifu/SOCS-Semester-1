#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		for(int i = 1; i<=N;i++){
			if(i%2==1){
				if(i==1 || i==N){
					for(int j =1; j<=N;j++){
						printf("*");
					}
				}else{
					for(int j =1; j<=N;j++){
						if(j%2==1){
							printf("*");
						}else{
							printf(" ");
						}
					}	
				}
			}else if(i%2==0){
				else if(i==(N+1)/2){//di tengah	
				
				}else{
					
				}		
			}
			printf("\n");
		}
	}
	return 0;
}
