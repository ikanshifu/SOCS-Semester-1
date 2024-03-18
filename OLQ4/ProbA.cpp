#include <stdio.h>

int main(){
    int N,D;
    
	scanf("%d", &N); 
	int K[N]; 
	D = 0;
    for(int i=0;i<N;i++){
    	scanf("%d", &K[i]);
	}
	for(int i=0;i<N;i++){
		D += K[i];
		if(D == 12) D = 28;
		if(D == 35) D = 7;
		if(D == 30) D = 10;
		if(D > 39) D-=40;
	}
	printf("%d\n",D);
return 0;
}
