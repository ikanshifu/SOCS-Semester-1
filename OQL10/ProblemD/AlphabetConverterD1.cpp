#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in","r");
	//N = banyaknya proses penggantian huruf yang dilakukan
	//A = huruf yang ada string
	//B = huruf yang akan mengganti huruf A
    int T;
    fscanf(fp, "%d\n", &T);
    for (int tc = 0;tc<T;tc++){
        char X[100];
        int N;
        int counter[26]={0};
		fscanf(fp,"%s\n",X);
		fscanf(fp,"%d\n",&N);
		int length = strlen(X);
        char A,B;
        for (int i=0; i<N; i++){
            fscanf(fp, "%c %c\n", &A,&B);
            for (int j = 0;j<length;i++){
                if (X[j]==A){
                    X[j]=B;
                }
            }
        }
        int j = 0;
        while (X[j]!='\0'){
            int z=X[j]-65;
            counter[z]++;
            j++;
            d[j]++;
        }
        for (int i=0; i<26; i++){
            if (d[i]>0){
                printf("%c %d\n", i+65, d[i]);
                d[i]=0;
            }
        }
    }
    fclose(fp);
}
