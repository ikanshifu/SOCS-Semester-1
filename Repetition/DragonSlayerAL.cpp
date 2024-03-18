#include <stdio.h>

int main(){
	int N,M;
	int wb,wd;
	int x=0,y=0;//x max damage weapon dan y max damage dragon
	scanf("%d %d", &N,&M);
	for(int i=0;i<N;i++){
		scanf("%d",&wb);
		if(wb>x){
			x = wb;
		}
	}
	for(int j=0;j<M;j++){
		scanf("%d",&wd);
		if(wd>y){
			y = wd;
		}
	}
	if(x>y){
		printf("The dark secret was true\n");
	}else{
		printf("Secret debunked\n");
	}
	return 0;
}
