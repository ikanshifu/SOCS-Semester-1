#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TABLE_SIZE 25

struct User{
	char username[101], id[101];
	int score;
	struct User*next;
	struct User*prev;
}*head = NULL, *tail = NULL;

struct User *newNote(int value){
	struct User *node = (struct User*) malloc(sizeof(struct User));
	node -> value = value;
	node -> next = NULL;
	node -> prev = NULL;
	return node;
}

char name[TABLE_SIZE][100];

void initializeTable() {
    for (int i = 0;i < TABLE_SIZE;i++) {
        strcpy(name[i], "");
    }
}

unsigned int hash_func(char *str) {
    unsigned int ascii_sum = 0;
    for (int i = 0;i < strlen(str);i++) {
        int asc_value = str[i];
        ascii_sum += asc_value;
    }
    return ascii_sum % TABLE_SIZE;
}

void insertData(char *str) {
    int index = hash_func(str);
    if (strcmp(name[index], "") == 0) {
        strcpy(name[index], str);
    } else {
      printf("User Already Registered");  
    }
}

void pushHead(int value){
	struct Data *node = newNote(value);
	if(head == NULL){
		head = tail = node;
	}else{
		node -> next = head;
		head -> prev = node;
		head = node;
	}
}

void pushTail(int value){
	struct Data *node = newNote(value);
	if(head == NULL){
		head = tail = node;
	}else{
		tail -> next = node;
		node -> prev = tail;
		tail = node;
		
	}
}

void printAll(){
	if(head == NULL){
		printf("No Data\n");
		return;
	}else{
		struct Data* curr = head;
		while(curr != NULL){
			printf("%d\n", curr->value);
			curr = curr -> next;
		}
	}
}

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
		if(size == 4){
			system("cls");
			
		}else if(size == 6){
			system("cls");
		}
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
