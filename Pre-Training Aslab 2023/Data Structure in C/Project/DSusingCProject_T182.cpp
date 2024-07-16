#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int option,size;
	puts("Calyx");
	printf("\n");
	puts("1. New Game");
	puts("2. Highscore");
	puts("3. Exit");
	printf(">> ");
	scanf("%d", &option);
	if(option == 1){
		system("cls");
		printf("Input Grid Size[4 or 6]: ");
		scanf("%d", size);
	}else if(option == 2){
		system("cls");
		char *highscore = "highscore.txt";
    	FILE *fp = fopen(highscore, "r");
    	char ch;
    	while ((ch = fgetc(fp)) != EOF)
        	putchar(ch);
    	fclose(fp);
		printf("Press Enter to Continue...\n");getchar();
	}else if(option == 3){
		system("cls");
		printf("nar\n");
	}
	
	return 0;
}
