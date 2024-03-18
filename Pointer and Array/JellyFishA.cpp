#include <stdio.h>

int main(){
    int N,Q,total,A,B;
    //N=jumlah hari
    //Q=jumlah temen
    scanf("%d", &N);
    int views[N];
	for(int i=0;i<N;i++){
		scanf("%d", &views[i]);
		}
		scanf("%d", &Q); 
		for(int i=0;i<Q;i++){
			total = 0;
			scanf("%d %d", &A, &B);
				for(int j=A-1;j<B;j++){
				total += views[j];  
    		}
    	printf("Case #%d: %d\n",i+1,total);
	}	
return 0;
}
