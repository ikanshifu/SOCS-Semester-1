#include <stdio.h>
int main(){
	int A1,B1,C1,D1,A2,B2,C2,D2,A3,B3,C3,D3,hasil1,hasil2,hasil3;
	char KB,PL,KT,MN,KL;
	scanf("%c%d%c%d%c%c%cd%%c%d%c\n", &KB,&A1,&PL,&B1,&KT,&KL,&KB,&C1,&MN,&D1,&KT);
	scanf(" %c%d%c%d%c%c%cd%%c%d%c\n", &KB,&A2,&PL,&B2,&KT,&KL,&KB,&C2,&MN,&D2,&KT);
	scanf(" %c%d%c%d%c%c%cd%%c%d%c\n", &KB,&A3,&PL,&B3,&KT,&KL,&KB,&C3,&MN,&D3,&KT);
	hasil1 = (A1+B1)*(C1-D1);
	hasil2 = (A2+B2)*(C2-D2);
	hasil3 = (A3+B3)*(C3-D3);
	printf("%d %d %d\n", hasil1, hasil2, hasil3);
	return 0;
}
