#include<stdio.h>

int main(){
	int tc;
	scanf("%d",&tc);
	for(int k=1; k<=tc ; k++){
		int x,y;
		scanf("%d %d",&x,&y);
		int result = 0;
		int satuan = 1;
		
		while(x>0 || y>0){
			int itungan = (x%10)+(y%10);
			itungan%=10;
			
			result = result +(itungan*satuan);
			
			x/=10;
			y/=10;
			satuan*=10;
		}
		printf("Case #%d: ",k);
		printf("%d\n",result);
		
		
	}
	
	
	return 0;
}
