#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	double success = 0, rate;
	for(int i = 1;i<=T;i++){
		int layout[10][10];
		int counter[10] = {};
		int fail;
		for(int c = 0;c < 3;c++){
			for(int r = 0; r < 3;r++){
				for(int c1 = (c*3)+1;c1<=3*(c)+3;c1++){
					for(int r1 = (r*3)+1;r1<=3*(r)+3;r1++){
						counter[layout[c1][r1]]++;
					}
				}
				for(int y=1;y<=9;y++){
                    if(counter[y] != 1){
                        fail = 1;
                        break;
                    }
                }
                for(int y=0;y<10;y++){
                    counter[y] = 0;
			}
		}
	}
		if(fail == 1){
			printf("Case #%d: FALSE\n",i);
		}else{
			printf("Case #%d: TRUE\n",i);
			success = success + 1;
		}
	}
	rate = success/T;
	printf("%.2lf%%\n",rate);
	
	return 0;
}
