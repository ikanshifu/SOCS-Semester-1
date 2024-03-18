#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	int N,A[1001];
	for(int tc = 1; tc<=T; tc++){
		scanf("%d",&N);
		for(int i = 0;i<N;i++){
			scanf("%d", &A[i]);
		}
		int bitOnCount = 0, notbitOnCount = 0;
		for(int j = 0; j<N-1;j++){
			for(int k=j+1;k<N;k++){
			int hasil = A[j]^A[k];
			int biton=0;
			while(hasil){
				hasil = hasil & (hasil-1);
				biton++;
			}
				if(biton>=3){
					bitOnCount++;
				}else{
					notbitOnCount++;
				}
			}
		}
		printf("Case #%d: %d %d\n", tc, bitOnCount, notbitOnCount);	
	}
	return 0;
}
