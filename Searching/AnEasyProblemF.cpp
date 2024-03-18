#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int a[N],counter=0;
	for(int i = 0;i<N;i++){
		scanf("%d",&a[i]);
		if(a[i]==1){
			counter++;
			break;
		}
	}
	if(counter==0){
		printf("easy\n");
	}else{
		printf("not easy\n");
	}
	return 0;
}
