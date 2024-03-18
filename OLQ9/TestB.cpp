#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void matchMaking(int K, int N, int mmr[], int F) {
    qsort(mmr, N, sizeof(int), compare);

    int min = 9999;
    int mmr1 = -1;
    int mmr2 = -1;

    int cek = -1;
    for (int i = 0; i < N; i++) {
        if (mmr[i] == F) {
            cek = i;
            break;
        }
    }

    if (cek != -1) {
        for (int i = 0; i < N; i++) {
            if (mmr[i] > F && mmr[i] - F < min) {
                min = mmr[i] - F;
                mmr1 = F;
                mmr2 = mmr[i];
            }
        }

        if (mmr1 == -1 && mmr2 == -1) {
            for (int i = N - 1; i >= 0; i--) {
                if (mmr[i] < F) {
                    mmr1 = mmr[i];
                    mmr2 = F;
                    break;
                }
            }
        }
    }

    if (mmr1 == -1 && mmr2 == -1) {
        printf("CASE #%d: -1 -1\n", K);
    } else {
        printf("CASE #%d: %d %d\n", K, mmr1, mmr2);
    }
}
int main(){
	int T;
	scanf("%d", &T);
	for(int tc = 1; tc<=T;tc++){
		int N,F;
		scanf("%d",&N);
		int MMR[N+1];
		for(int i = 0; i<N;i++){
			scanf("%d",&MMR[i]);
		}
		scanf("%d",&F);
		matchMaking(tc, N, MMR,F);
	}
	return 0;
}
