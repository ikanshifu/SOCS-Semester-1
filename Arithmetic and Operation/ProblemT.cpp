#include<stdio.h>
int main(){
	char course_code1[11],course_code2[11],course_code3[11],course_code4[11],course_code5[11];
	int H1,H2,H3,H4,H5,H6,H7,H8,H9,H10,M1,M2,M3,M4,M5,M6,M7,M8,M9,M10;
	scanf("%s %d:%d-%d:%d", course_code1, &H1, &M1, &H2, &M2);getchar();
	scanf("%s %d:%d-%d:%d", course_code2, &H3, &M3, &H4, &M4);getchar();
	scanf("%s %d:%d-%d:%d", course_code3, &H5, &M5, &H6, &M6);getchar();
	scanf("%s %d:%d-%d:%d", course_code4, &H7, &M7, &H8, &M8);getchar();
	scanf("%s %d:%d-%d:%d", course_code5, &H9, &M9, &H10, &M10);
	
	printf("%s %02d:%02d-%02d:%02d\n", course_code1, H1-1, M1, H2-1, M2);
	printf("%s %02d:%02d-%02d:%02d\n", course_code2, H3-1, M3, H4-1, M4);
	printf("%s %02d:%02d-%02d:%02d\n", course_code3, H5-1, M5, H6-1, M6);
	printf("%s %02d:%02d-%02d:%02d\n", course_code4, H7-1, M7, H8-1, M8);
	printf("%s %02d:%02d-%02d:%02d\n", course_code5, H9-1, M9, H10-1, M10);

	return 0;
}
