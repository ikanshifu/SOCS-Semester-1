#include <stdio.h>

int main (){
	int N;
	scanf("%d", &N);
	int tc[N+5], ts[N+5], tv[N+5], clarify=0;
	for(int i = 0; i < N;i++){
		scanf("%d %d %d", &tc[i], &ts[i], &tv[i]);
		if(ts[i]>tv[i]){
			clarify++;
		}
	}	
	printf("%d\n", clarify);

	return 0;
}
