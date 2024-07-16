#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

struct menu{
	char id[101],dishname[101];
	int price,stock;
	menu* next;	
}*head,*tail;

struct costumer{
	char name[101];
	costumer* next;
}*head1,*tail1;

struct order{
	char dishname[101];
	order* next;
}*head2,*tail2;

void rand_str(char *dest, size_t length) {
    char charset[] = "0123456789"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (length-- > 0) {
        size_t index = (double) rand() / RAND_MAX * (sizeof charset - 1);
        *dest++ = charset[index];
    }
    *dest = '\0';
}

int main(){
	int option;
	struct menu a;
	printf("FFresto Administrator\n");
	printf("===================================================================================================\n");
	puts("1. Insert New Dish");
	puts("2. Update Dish");
	puts("3. Delete Dish");
	puts("4. Add Customer");
	puts("5. Customer List");
	puts("6. Order");
	puts("7. Payment");
	puts("8. Exit");
	printf(">> ");
	scanf("%d",&option);
	if(option==1){
		system("cls");
		printf("Input Dish Name [Must have minimum 2 words and every word start with capital], 0 to cancel: ");
		scanf("%s", a.dishname[101]);
	}
	else if(option==2){
	system("cls");
	char *dish = "dish.txt";
    FILE *fp = fopen(dish, "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\n");
    printf("Select dish ID, 0 to cancel: ");
    scanf("%s", a.id[101]);
	}
	else if(option==3){
		system("cls");
		char *dish = "dish.txt";
    	FILE *fp = fopen(dish, "r");
    	char ch;
    	while ((ch = fgetc(fp)) != EOF)
        	putchar(ch);
    	fclose(fp);
   		printf("\n");
   		printf("Select dish ID, 0 to cancel: ");
    	scanf("%s", a.id[101]);
	}
	else if(option==4){
		system("cls");
		printf("Insert customer name [Only contains Alphabet and Space], 0 to cancel: ");
	}
	else if(option==5){
		system("cls");
			printf("FFresto don't have any customer!");	
	}
	else if(option==6){
		system("cls");
			printf("FFresto don't have any customer!");
	}
	else if(option==7){
		system("cls");
			printf("FFresto don't have any customer!");
	}
	else if(option==8){
		printf("Thank you for using FFresto Administrator!");
		return 0;
	}
	
	return 0;
}
