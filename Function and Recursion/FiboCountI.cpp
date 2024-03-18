#include <stdio.h>

int fibonacci(int n,int *count){
	(*count)++;
	if(n==0||n==1){
		return n;
	}else {
		return fibonacci(n - 2,count) + fibonacci(n-1,count);	
	}
}

int main(){
	int T;
	scanf("%d",&T);
	int n;
	for(int tc = 1;tc<=T;tc++){
		scanf("%d",&n);
		int count = 0;
		fibonacci(n,&count);
		printf("Case #%d: %d\n", tc,count);
	}
	return 0;
}
