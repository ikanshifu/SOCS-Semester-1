#include <stdio.h>
#include <string.h>

/*Structure and File Processing(12 Desember 2023)
	a.Struct and Union		[]
	b.Read and Write File		[]
*/
//b.Read and Write File

int counter = 0;
struct Item{
	char itemName[101];
	int itemPrice;
}itemList[100];

void readFile(){
	counter = 0;
	FILE *fp = fopen("items.txt","r");
	// r => read untuk membaca file
	// w => write untuk menulis ke file dan overwrite file yang ada
	// a => append sama seperti write namun tidak overwrite dan menambahkan
	
	//Validasi jika file bermasalah atau tidak ada
	if(fp == NULL){
		printf("File Not Found!");
		return;
	}
	//feof(fp) artinya selama masih ada data dalam file maka akan lanjut loop
	while(!feof(fp)){
		fscanf(fp,"%[^#]#%d\n",&itemList[counter].itemName, &itemList[counter].itemPrice);
		counter++;
	}
	fclose(fp);
}

void appendFile(){
	char name[255];
	int price;
	printf("Insert New Item\n");
	printf("Name: ");
	scanf("%s", name);getchar();
	printf("Price: ");
	scanf("%d",&price);getchar();
	FILE *fp = fopen("items.txt","a");
	
	if(fp == NULL){
		printf("File Not Found!");
		return;
	}
	
	fprintf(fp,"%s#%d\n",name, price);
	fclose(fp);
}

void writeFile(){
	char name[255];
	int price;
	printf("Insert New Item\n");
	printf("Name: ");
	scanf("%s", name);getchar();
	printf("Price: ");
	scanf("%d",&price);getchar();
	FILE *fp = fopen("items.txt","w");
	
	if(fp == NULL){
		printf("File Not Found!");
		return;
	}
	
	fprintf(fp,"%s#%d\n",name, price);
	fclose(fp);
}

void printfData(){
	printf("==========================\n");
	for(int i = 0; i<counter;i++){
		printf("Nama item (%d): %s\nHarga: %d\n", i+1,itemList[i].itemName, itemList[i].itemPrice);
	}
	printf("==========================\n");
}
int main(){
	readFile();
//	appendFile();
	writeFile();
	printfData();
	return 0;
}
