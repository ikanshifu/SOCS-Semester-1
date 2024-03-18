#include <stdio.h>
int main(){ 
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		int N,K;
		scanf("%d %d", &N,&K);
		char s[N-1];
		scanf("%s", s);
		for(int j=0;j<N;j++){
			int y = s[j] - 'a';
			y = (y+K)%26;
		s[j] = y + 'a';		
	}
	printf("Case #%d: %s\n",i,s);
}
	return 0;
}
