#include <stdio.h>
int main(){
    long long N;
    scanf("%lld", &N);
    long long A,total=0;
    for(int i = 0; i<N;i++){
        scanf("%lld", &A);
        if(A>=0){
        total = A + total;
		}
	}	
	printf("%lld\n",total);
    return 0;
}
