#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int M,jojo,lili,bibi,total=0,average;
	scanf("%d %d %d",&jojo,&lili,&bibi);
	for(int i = 1;i<=N;i++){
		scanf("%d",&M);
		total = total + M;
	}
	average = (jojo + lili + bibi + total)/(N+3);
	if(jojo>=average){
		printf("Jojo lolos\n");
	}else{
		printf("Jojo tidak lolos\n");	
	}
	if(lili>=average){
		printf("Lili lolos\n");
	}else{
		printf("Lili tidak lolos\n");	
	}
	if(bibi>=average){
		printf("Bibi lolos\n");
	}else{
		printf("Bibi tidak lolos\n");	
	}
	return 0;
}
