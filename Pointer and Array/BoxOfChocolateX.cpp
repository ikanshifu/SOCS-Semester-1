#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1;tc<=T;tc++){
		int N, M;
		scanf("%d %d", &N,&M);
		//N jumlah anak
		//M jumlah cokelat
		long long total=0;
		for(int i = 0;i<N;i++){
			int choc[M];
			for(int j = 0;j<M;j++){
			scanf("%d",&choc[j]);
			}
			long long largest = 0;
			for(int j = 0;j<M;j++){
				if(choc[j] > largest){
					largest = choc[j];
				}
			}
			total = largest + total;
		}
		printf("Case #%d: %lld\n",tc,total);
	}
	return 0;
}
