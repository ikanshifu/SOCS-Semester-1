#include<stdio.h>
#include<string.h>

void fibo(int n,char hurufa,char hurufb){
	if(n == 0){
		printf("%c",hurufa);
	}else if(n==1){
		printf("%c",hurufb);
	}else{
		fibo(n-1,hurufa,hurufb);
		fibo(n-2,hurufa,hurufb);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int n;
	char huruf1,huruf2;
	for(int tc = 0; tc<T;tc++){
		scanf("%d %c %c",&n,&huruf1,&huruf2);getchar();	
		printf("Case #%d: ",tc+1);
		fibo(n, huruf1,huruf2);
		printf("\n");
	}
	
	return 0;
}
