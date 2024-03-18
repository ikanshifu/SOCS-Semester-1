#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int N;
    char S[1001];
    for(int tc = 1; tc<=T;tc++){
    	int lili = 0, bibi = 0, tie = 0;
    	scanf("%d",&N);
    	scanf("%s",&S);
    	for(int i = 0 ;i<N;i++){
    		if(S[i] == 'L'){
    			lili++;
			}else if(S[i] == 'B'){
				bibi++;
			}else if(S[i] == 'T'){
				tie++;
			}
		}
    	if(lili > bibi&& lili>tie){
    		printf("Lili\n");
		}else if(bibi>lili&& bibi >tie){
			printf("Bibi\n");
		}else if(lili == bibi|| tie>bibi&&tie>lili){
			printf("None\n");
		}
    }
    return 0;
}

