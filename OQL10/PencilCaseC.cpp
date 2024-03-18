#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	double R,H,total=0;
	for(int i = 1;i<=T;i++){
		scanf("%lf %lf",&R,&H);
		total = 2*3.14*R*(H+R);
		printf("Case #%d: %.2lf\n",i,total);
	}
	return 0;
}
