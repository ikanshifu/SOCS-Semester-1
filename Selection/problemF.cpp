#include <stdio.h>
#include <string.h>
struct material{
	long long int price;
	char name[20];
};

int swap(char a[], char b[]){
	char temp[15];
	strcpy(temp, a);
	strcpy(a,b);
	strcpy(b,temp);
}
int main(){
	struct material materi[3];
	strcpy(materi[0].name, "Daging\n");
	strcpy(materi[1].name, "Sayur\n");
	strcpy(materi[2].name, "Telur\n");
	
	for(int i=0;i<3;i++){
		scanf("%lld", &materi[i].price);
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(materi[i].price<materi[j].price){
				swap(materi[i].name, materi[j].name);
			}
		}
	}
	for(int i=0;i<3;i++){
		printf("%s", materi[i].name);
	}
}
