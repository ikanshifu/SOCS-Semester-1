#include <stdio.h>
/*Materi Session 3
- If and If Else
- Nested If
- Switch
- Ternary Operator*/
int main(){
	//if(condition)
	//perintah/code block yang dijalankan jika memenuhi syarat
	//}else{ akan jalan jika syarat tidak terpenuhi
	/*int num1 =25;
	if (num1 == 5) {
		printf("nilai sama dengan 5");
		} else if (num1 == 4){
		printf("nilai sama dengan 4");
		} else if (num1 <=3 && num1 >=1){
		printf ("nilai diantara 1 dan 3");
		} else {
		//nested if
		if (num1 == 10){
			printf("nilai sama dengan 10");
		}else{
			printf("nilai tidak diketahui");
		}	
	}*/
	//Switch Case
	/*int num1 = 1;
	switch (num1){
		case 1:
			printf("num1 = 1");
			break;
		case 2:
			printf("num1 = 2");
			break;
		default:
			printf("nilai num1 %d", num1);
			break;:*/
	//Ternary Operator	
	int num1 = 5;
	int num2 = (num1 >= 10) ? printf("benar") : printf("salah");                                                                                                                                                                           
    printf("%d\n",num1);
    printf("%d", num2);
	return 0;
}
