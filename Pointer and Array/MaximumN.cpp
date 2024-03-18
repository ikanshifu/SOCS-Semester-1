#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int tc = 1; tc<=T;tc++){
		int N;
		scanf("%d",&N);
		int V[N];
		int max1=0,max2=0,X=0;
		long long maximum=0;
		for(int i = 0;i<N;i++){
			scanf("%d",&V[i]);
		}
		//instead of nyimpen valuenya, max1 sama max2 nyimpen index
		for(int i = 0;i<N;i++){
			if(V[i]>max1){
				max1 = V[i];
				X=i;
			}
		}
		for(int i = 0;i<N;i++){
			if(i!=X){
				if(V[i]<=max1){
					max2 = V[i];
				}
			}
		}
		maximum = max1+max2;
		printf("Case #%d: %lld\n",tc,maximum);
	}
	return 0;
}
