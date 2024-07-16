#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int choice;
	puts("Notepad");
	printf("\n");
	puts("1. Login");
	puts("2. Register");
	puts("3. Exit");
	printf(">> ");
	scanf("%d", &choice);
	if(choice == 1){
		system("cls");
		printf("Input account name (press 0 to exit): ");
		scanf("%d", &choice);
	}else if(choice == 2){
		system("cls");
		int choice1;
		puts("What kind of account do you want to make:"):
		puts("1. Writer");
		puts("2. Reader");
		printf("[Choose 1 - 2] (press 0 to exit): ");
		scanf("%d", &choice1);
			if(choice1 == 1){
				system("cls");
				puts("Input account name [4 - 30 characters, must be unique] (press 0 to exit): ");		
			}else if(choice1 == 2){
				system("cls");
				puts("Input account name [4 - 30 characters, must be unique] (press 0 to exit): ");
			}
	}else if(choice == 3){
		system("cls");
	}
	return 0;
}
