#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int N;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d", &N);
		int total = 0;
		int X[N];
		for(int i = 0; i<N;i++){
			scanf("%d", &X[i]);
			total = total + X[i];
		}
		  
		int splitTotal = 0;
        int flag = 0;
        for (int i = 0; i < N - 1; i++) {
            splitTotal = splitTotal + X[i];
            if (splitTotal == total - splitTotal) {
                flag = 1;
                break;
            }
        }
		if(total>N || flag == 0){
			printf("Case #%d: No\n",tc);
		}else{
			printf("Case #%d: Yes\n",tc);
		}
	}
	
	return 0;
}
