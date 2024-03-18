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
		if(D == 9) D = 21;
		if(D == 33) D = 42;
		if(D == 76) D = 92;
		if(D == 53) D = 37;
		if(D == 80) D = 59;
		if(D == 97) D = 88;
	}
	printf("%d\n",D);
return 0;
}
