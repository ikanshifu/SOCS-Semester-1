#include <stdio.h>
#include <string.h>

void convert(char *X, char A, char B,int *alphabet) {
    int length = strlen(X);
    if(!alphabet[A - 'A'])
   		for (int i = 0; i < length; i++) {
      	  	if (X[i] == A) {
            	X[i] = B;
       		}
    	}
    alphabet[A - 'A'] = 1;
}
int main(){
	int T;
	//N = banyaknya proses penggantian huruf yang dilakukan
	//A = huruf yang ada string
	//B = huruf yang akan mengganti huruf A
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp,"%d\n",&T);
	for(int tc = 0;tc<T;tc++){
		char X[102];
		int N;
		fscanf(fp,"%s\n",X);
		fscanf(fp,"%d\n",&N);
		int length = strlen(X);
		char A,B;
		int counter[26]={0};
		int alphabet[26]={0};
	
		for(int i = 0;i<N;i++){
			fscanf(fp,"%c %c\n",&A,&B);
			convert(X,A,B,alphabet);
    	}

        for(int i=0;i<length;i++){
        	if (X[i] >= 'A' && X[i] <= 'Z') {
                counter[X[i] - 'A']++;
            }
		}
		for (int i = 0; i < 26; i++) {
            if (counter[i] > 0) {
                printf("%c %d\n", 'A' + i, counter[i]);
            }
        }
	}
	fclose(fp);
	return 0;
}
