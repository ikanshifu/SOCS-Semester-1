#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int x=1;x<=T;x++){
		int N,A,B,C,D;
		scanf("%d %d %d %d %d", &N, &A, &B, &C,&D);
		
		int y = 0;
		for(int i = 1; i<=N;i++){
			if(i%A==0||i%B==0||i%C==0||i%D==0){
				y++;
			}
		}
		printf("Case #%d: %d\n", x,y);
	}
	return 0;
}
