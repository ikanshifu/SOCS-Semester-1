#include <stdio.h>
#include <math.h>

int primeNum(int num){
	if(num < 2){
		return 0;
	}
	for(int i = 2;i<=sqrt(num);i++){
		if(num % i==0){
			return 0;
		}
	}
	return 1;
}

int squareNum(int num){
	int root = (int)sqrt(num);
	return root * root == num;
}

int cubicNum(int num){
	int root = (int)cbrt(num);
	return root * root * root == num;
} 

int main(){
	int T;
	scanf("%d", &T);
	int X;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d", &X);
		printf("Case #%d : ", tc);
		if (primeNum(X)) {
            printf("prime\n");
        }else if (squareNum(X)&&cubicNum(X)){
			printf("square cubic\n");
		}else if (squareNum(X)) {
            printf("square\n");
        } else if (cubicNum(X)) {
            printf("cubic\n");
        } else {
            printf("none\n");
        }    
    }
	return 0;
}
