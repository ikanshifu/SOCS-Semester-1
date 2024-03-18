#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1; tc<=T;tc++){
		double M,I,N;
		scanf("%lf %lf %lf", &M,&I,&N);
		int tabungan=M;
		double pajak = 0.8;
		double bungaperbulan = I/1200;
		printf("Case #%d:\n",tc);
		for(int i = 1; i<=N;i++){
			int bunga=0;
			bunga = tabungan * bungaperbulan *pajak;
//			printf("%d\n", bunga);
			tabungan = tabungan + bunga;
			printf("%d %d\n", i,tabungan);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
