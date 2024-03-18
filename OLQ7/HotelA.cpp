#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int A[N], count = 0;
	int diffelemen[N];
	for(int i = 0; i<N;i++){	
			scanf("%d", &A[i]);
			int distinct = 1;
			for (int j = 0; j<count; j++){
				if(A[i]==diffelemen[j]){
					distinct = 0;
					break;
				}
			}
			if(distinct){
				diffelemen[count]=A[i];
				count++;
			}
		}
	printf("%d\n", count);
	return 0;
}
