#include <stdio.h>
#include <stdlib.h>

//24 Okt 2023
//C.Swap: 1.swapByValue = hanya menukar nilai/value dari variable tersebut
//		  2.swapByReference = menukar 1 variable penuh termasuk address dan value
	
void swapByValue(int a, int b){
	int t = a;
	a = b;
	b = t;
	printf("a setelah di swap = %d\n", a);
	printf("b setelah di swap = %d\n",b);
}

void swapByReference(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main(){
	int a = 10;
	int b = 5;
	swapByValue(a,b);
	swapByReference(&a,&b);
	printf("a setelah di swap[int main] = %d\n", a);
	printf("b setelah di swap[int main] = %d\n",b);
	return 0;
}

