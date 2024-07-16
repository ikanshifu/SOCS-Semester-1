#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
	int n,m;
	puts(
	"__ _ _               _       ___  ___ _\n"
   "/ /(_) |__  _ __ __ _| |__   /___\/___\ | __\n"
  "/ / | | '_ \| '__/ _` | '_ \ //  ///  // |/ /\n"
 "/ /__| | |_) | | | (_| | |_) / \_// \_//|   <\n"
" \____/_|_.__/|_|  \__,_|_.__/\___/\___/ |_|\_\\n");
	printf("\n");
	printf("+========================================================+\n");
	printf("|                                                        |\n");
	printf("|    1. View Book List                                   |\n");
	printf("|    2. Add Book                                         |\n");
	printf("|    3. Remove Book                                      |\n");
	printf("|    4. Exit                                             |\n");
	printf("|                                                        |\n");
	printf("+========================================================+\n");
	printf(">> ");
	scanf("%d",&n);
	if(n==1){
		printf("Sorted by Author & Price\n");
		char data[1001];
		FILE * fpointer = fopen("Data.txt", "r");
		while(!feof(fpointer)){
			fgets(data,1001, fpointer);
			printf("%s",data);		
			}
			fclose(fpointer);
		printf("\n");
		printf("Sort: ASCENDING\n");
		printf("[0]: Ascending\n");
		printf("[1]: Descending\n");
		printf("[9]: Back\n");
		printf("\n");
		printf(">>");
		scanf("%d",&m);
		while(m!=9||m!=0||m!=1){
			if(m==1){
				printf("Sorted by Author & Price\n");
				char data[1001];
				FILE * fpointer = fopen("Data.txt", "r");
				while(!feof(fpointer)){
					fgets(data,1001, fpointer);
					printf("%s",data);		
					}
					fclose(fpointer);
				printf("\n");
				printf("Sort: Descending\n");
				printf("[0]: Ascending\n");
				printf("[1]: Descending\n");
				printf("[9]: Back\n");
				printf("\n");
				printf(">>");
		
			}else if(m==9){
			}
		}
	}else if(n==2){
		printf("Input author's name [ >= 5 characters & <= 20 characters]: ");	
		scanf("%s");
	}else if(n==3){
		printf("Sorted by Author & Price [ASC]\n\n");
		char data[1001];
		FILE * fpointer = fopen("Data.txt", "r");
		while(!feof(fpointer)){
			fgets(data,1001, fpointer);
			printf("%s",data);		
			}
			fclose(fpointer);
	}else if(n==4){
		printf("Goodbye");
		exit(0);
	}
	return 0;
}
