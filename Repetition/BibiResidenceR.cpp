#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	long long N, X[N+5],minimum,selisih[N+5];
	for(int tc = 1; tc<=T;tc++){
		scanf("%lld", &N);
		minimum = 1000000001;
		for(int i = 0; i<N;i++){
			scanf("%lld", &X[i]);
		}
		for(int i = 0;i<N;i++){
			if(i>0){
				selisih[i] = X[i]-X[i-1];
				if(selisih[i]<0){
					selisih[i] = selisih[i]*-1;
			 }
				if(selisih[i]<minimum){
					minimum = selisih[i];
				}
			}
		}
		printf("Case #%d: %lld\n",tc,minimum);
	}
	return 0;
}
