#include <stdio.h>

int main(){
    char x1,x2,x3;
    int y1=1,y2=2,y3=3;
    scanf("%c %c %c",&x1,&x2,&x3);
    if(x1!=x2 && x2!=x3 && x1!=x3){
    if(x1<x2&&x1<x3){
    	if(x2<x3){
    		printf("%d %d %d\n",y1,y2,y3);
		}else{
			printf("%d %d %d\n",y1,y3,y2);
		}
	}else if(x2<x1&&x2<x3){
		if(x1<x3){
			printf("%d %d %d\n",y2,y1,y3);
		}else{
			printf("%d %d %d\n",y2,y3,y1);
		}
	}else if(x3<x2&&x3<x1){
    	if(x1<x2){
			printf("%d %d %d\n",y3,y1,y2);
		}else{
			printf("%d %d %d\n",y3,y2,y1);
		}
	}
}
return 0;
}
