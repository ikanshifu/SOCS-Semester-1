#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N,M,Q;
	//N jumlah teman jojo
	//M jumlah ruangan di lorong
	//Q daftar/nomor teman yang akan mengunjungi ruangan
	for(int tc = 1;tc<=T;tc++){
		int action[100][100];
		scanf("%d %d %d",&N,&M,&Q);
		for(int i = 0;i<N;i++){
			for(int j = 0;j<M;j++){
				scanf("%d",&action[i][j]);
			}
		}
		int urutanTeman[100];
		for(int k = 0;k<Q;k++){
			scanf("%d",&urutanTeman[k]);
		}
		printf("Case #%d:\n",tc);
		int lightOn;
		for (int ruangan = 0; ruangan < M; ruangan++) {
			lightOn=0;
            for (int nomorTeman = 0; nomorTeman <Q; nomorTeman++) {
                int current = urutanTeman[nomorTeman] - 1;
                if (action[current][ruangan] == 1) {
                    lightOn = 1 - lightOn;
                }
            }
       		if(lightOn == 1){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
        }
	}
	return 0;
}
