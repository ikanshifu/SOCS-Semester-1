#include <stdio.h>

int main (){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		int N,P,Q;
		//N = jumlah angka
		//P = angka pilihan Bibi
		//Q = angka pilihan Lili
		scanf("%d",&N);
		int A[N];
		for(int i = 0;i<N;i++){
			scanf("%d",&A[i]);
		}
		scanf("%d %d",&P,&Q);
		if(A[P-1]>A[Q-1]){
			printf("Case #%d : Bibi\n",tc);	
		}else if(A[Q-1]>A[P-1]){
			printf("Case #%d : Lili\n",tc);
		}else if(A[Q]==A[P]){
			printf("Case #%d : Draw\n",tc);
		}
	}	
	return 0;
}
