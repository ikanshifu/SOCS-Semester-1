#include <stdio.h>

int main (){
	FILE *fp = fopen("testdata.in","r");;
	long long num[1000];
	long long odd = 0, even = 1;
	int count = 0;
	while(!feof(fp)){
		fscanf(fp,"%lld",&num[count]);
		count++;
	}
	for(int i = 0;i<count;i++){
		if(num[i]%2==0){
			even*=num[i];
		}else{
			odd+=num[i];
		}
	}
	printf("%lld\n",even-odd);
	fclose(fp);
	return 0;
}
