#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int tc = 1;tc<=T;tc++){
		int A,B,hasil=0,satuan=1;
		scanf("%d %d",&A,&B);
		while(A>0 || B>0){
			int total = (A%10)+(B%10);
			total = total%10;
			hasil = hasil +(total*satuan);
			A=A/10;
			B=B/10;
			satuan = satuan*10;
		}
		printf("Case #%d: %d\n",tc,hasil);
	}
	return 0;
}
