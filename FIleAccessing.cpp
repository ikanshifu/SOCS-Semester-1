#include <stdio.h>
//fp = FilePointer
/*
Mode dalam fopen:
-Read(r) = membaca file
-Write(w) = menulis ke dalam file namun akan overwrite file yang ada
-Append(a) = menulis ke dalam file namun bersifat menambahkan
*/
FILE *fp;

int main(){
	char str[1001];
	fp = fopen("Text.txt", "r");
	// fp = fopen("[nama file]", "[mode fopen]");
	fscanf(fp, "%[^\n]\n",str);
	printf("%s\n", str);
	fscanf(fp, "%[^\n]\n",str);
	printf("%s\n", str);
	return 0;
}
