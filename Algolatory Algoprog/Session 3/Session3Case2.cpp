#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);getchar();
	char papan[n+2][n+2];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%c",&papan[i][j]);
		}
		getchar();
	}
	
	//2 buah variabel penentu kemenangan
	int xwin=0, owin =0;
	//Ceklah kemenangan tiap simbol
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(papan[i][j] == 'X'){
				//Kemungkinan menang Horizontal
				//Validasi out of range
				if(j+1 <n && j+2<n){
					if(papan[i][j+1]=='X' && papan[i][j+2]=='X'){
						xwin++;
					}					
				}
				
				//Kemungkinan menang vertikal
				if(i+1 <n && i+2<n){
					if(papan[i+1][j]=='X' && papan[i+2][j]=='X'){
						xwin++;
					}
				}
				
				//Kemungkinan menang diagonal
				if(i+1 <n && i+2<n && j+1<n && j+2<n){
					if(papan[i+1][j+1]=='X' && papan[i+2][j+2]=='X'){
						xwin++;
					}
				}
				
				if(i-1 >=0 && i-2>=0 && j+1 <n && j+2<n){
					if(papan[i-1][j+1]=='X' && papan[i-2][j+2]=='X'){
						xwin++;
					}
				}
			}else if(papan[i][j]=='O'){
					//Validasi out of range
				if(j+1 <n && j+2<n){
					if(papan[i][j+1]=='O' && papan[i][j+2]=='O'){
						owin++;
					}					
				}
				
				//Kemungkinan menang vertikal
				if(i+1 <n && i+2<n){
					if(papan[i+1][j]=='O' && papan[i+2][j]=='O'){
						owin++;
					}
				}
				
				//Kemungkinan menang diagonal
				if(i+1 <n && i+2<n && j+1<n && j+2<n){
					if(papan[i+1][j+1]=='O' && papan[i+2][j+2]=='O'){
						owin++;
					}
				}
				
				if(i-1 >=0 && i-2>=0 && j+1 <n && j+2<n){
					if(papan[i-1][j+1]=='O' && papan[i-2][j+2]=='O'){
						owin++;
					}
				}
			}
		}
	}
	
	if(xwin==owin){
		printf("Draw\n");
	}else if(xwin>owin){
		printf("X\n");
	}else if(owin>xwin){
		printf("O\n");
	}else if(xwin==0 && owin==0){
		printf("Invalid\n");
	}
	
	return 0;
}
