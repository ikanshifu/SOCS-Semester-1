#include <stdio.h>

FILE *fp2;

int main(){
	
	fp2 = fopen("testdata.txt", "a");  // append
	fprintf(fp2, " I am proud to be a Binusian\n");	// nambah data ke file
	fclose(fp2);
	
	fp2 = fopen("testdata.txt", "w"); // write
	fprintf(fp2, "Welcome to LA01 class\n");
	fclose(fp2);
	
	return 0;
}
