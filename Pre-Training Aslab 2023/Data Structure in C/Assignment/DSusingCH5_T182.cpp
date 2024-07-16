#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

struct Cake{
	char name[101], flavor[101], type[100];
	int price,stocks;
	struct Cake*next;
	struct Cake*prev;//sama seperti linked list namun ditambakan pointer prev
}*head = NULL, *tail = NULL;

struct Cake *newNote(int price){
	struct Cake *node = (struct Cake*) malloc(sizeof(struct Cake));
	node -> price = price;
	node -> next = NULL;
	node -> prev = NULL;
	return node;//node berfungsi sebagai tempat menaruh head yang baru
}

void printAll(){
	if(head == NULL){
		printf("No cake found...\n");
		printf("Press any key to continue\n\n");getchar();
		return;
	}else{
		struct Cake* curr = head;
		while(curr != NULL){
			printf("%d\n", curr->price);
			curr = curr -> next;
		}
	}
}

int main(){
	int choice;
 	puts("I-Cake");
 	puts("===================================================================================================");
 	puts("For [1]insert input: 1 [name]-[flavor]-[type]-[stocks]-[price]");
 	puts("Constraint:");
 	puts("- Name must ends with ' Cake'");
 	puts("- Flavor must 3 - 15 Character");
	puts("- Type must be: Premium, Specialty, Classic");
	puts("- Stocks must be more than 0");
	puts("- Price must be more than 80");
	puts("Example: insert Bolu Cake-Chocolate-Classic-10-80");
	puts("");
	puts("For [2]delete input: 2 [id]");
	puts("For [3]search input: 3 [id]");
	puts("Example: delete IC001");
	puts("");
	puts("For [4]view input: view");
	puts("For [5]exit input: exit");
	puts("==================================================================================================");
	printf(">> ");
	scanf("%d", &choice);
	
	if(choice == 1){
		
	}
	if(choice == 2){
	
	}
	if(choice == 3){
		
	}
	if(choice == 4){
		system("cls");
		puts("I-Cake");
		puts("===================================================================================================");
//		peek();	
	}else if(choice == 5){
		system("cls");
		puts("I-Cake");
		puts("===================================================================================================");
		puts("Thank you for using this program");
	}else{
		puts("Command not found");
		puts("press enter to continue...");
		scanf("\n");
//		continue;
	}
	return 0;
}
