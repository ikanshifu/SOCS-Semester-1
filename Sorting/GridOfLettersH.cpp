#include <stdio.h>
#include <string.h>
/*Obejctive: Sortir 2D array of letters secara 2 kali, yaitu sort secara ascending
di dalam setiap bari misalnya dea menjadi ade, lalu disortir lagi secara descending
namun langsung per baris misalnya ade,bef,beg menjadi beg,bef,ade; 
*/

char text[205][205];
//ngebandingin per baris
void descendingSort(char str[][205], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) < 0) {
                char temp[205];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}
//ngebandingin perkarakter
void ascendingSort(char str[],int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main(){
	int R,C;
	//R = size secara baris
	//C = size secara kolom
	scanf("%d %d",&R,&C);
	for(int i = 0;i<R;i++){
		scanf("%s",text[i]);
	}
	for(int i = 0;i<R;i++){
		ascendingSort(text[i],C);
	}
	descendingSort(text,R);
	for(int i = 0;i<R;i++){
		printf("%s\n",text[i]);
	}
	return 0;
}
