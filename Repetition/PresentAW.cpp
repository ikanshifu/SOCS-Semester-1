#include <stdio.h>

int main(){
	//T = classes
	//N = students
	int T;
	scanf("%d", &T);
	int N, presents, student[1001],highest;
	for(int tc = 1; tc<=T;tc++){
		scanf("%d",&N);
		presents = 0;
		highest = 0;
		for(int i = 0; i<N; i++){
			scanf("%d", &student[i]);
			if(student[i] > highest){
				highest = student[i];
			}
		}
		for(int i = 0; i<N; i++){
			if(student[i] == highest){
					presents++;
			}
		}
		printf("Case #%d: %d\n", tc, presents);
	}
	return 0;
}
