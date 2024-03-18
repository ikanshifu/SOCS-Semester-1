#include <stdio.h>

int operation(int A,int B){
	while(A!=B){	
		if(A==1){
			return A;
		}else if(A%2==0){
			A = A/2;
		}else{
			A = (A*3)+1;
		}
	}
	return A;
}

int main(){
	int T;
	scanf("%d",&T);
	int A,B;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d %d",&A,&B);
		printf("Case #%d: ",tc);
		if(operation(A, B) == B) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
	}
	return 0;
}
