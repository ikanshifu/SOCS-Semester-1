#include <stdio.h>

int jojonacci(int N){
	if(N%2==1||N==1){
    	return 1;
    }else if(N==0){
    	return 0;
	}else{
		return jojonacci(N - 2) + jojonacci(N-1);
	}
}

int main(){
	int N;
	scanf("%d",&N);
	int result = jojonacci(N);
	printf("%d\n",result);
	return 0;
}
