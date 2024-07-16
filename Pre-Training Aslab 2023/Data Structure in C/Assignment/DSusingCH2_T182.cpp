#include<stdio.h>

void clearConsole(){
	getchar();  
    printf("\033[2J\033[H"); 
}
void refreshConsole() {
    printf("\033[H");
    fflush(stdout); 
}
int main(){
	//Welcome Screen
	printf(" _      ____ ____  ____ ____  ____ ____  ______ __ __ \n");
	printf("| |    /    |    \|    |    \|    |    \|      |  |  |\n");
	printf("| |   |  o  |  o  )|  ||  D  )|  ||  _  |      |  |  |\n");
	printf("| |___|     |     ||  ||    / |  ||  |  |_|  |_|  _  |\n");
	printf("|     |  _  |  O  ||  ||    \ |  ||  |  | |  | |  |  |\n");
	printf("|     |  |  |     ||  ||  .  \|  ||  |  | |  | |  |  |\n");
	printf("|_____|__|__|_____|____|__|\_|____|__|__| |__| |__|__|\n");
	printf("_--___-^_^-_--__^-_--__^-_--____-^_^-_-^_^-_---__^--__-\n");
	printf("\n");
	printf("Welcome to labIRinth!\n");
	printf("\n");
	printf("One day, you wake up in a cursed labyrinth and want to escape.\n");
	printf("But,you realised that it might not be that easy.\n");
	printf("As you look around, you realize that there are mummies roaming the place.\n");
	printf("Try to get to the exit without getting caught by the mummies.\n");
	printf("Good luck and have fun!\n");
	printf("Press any key to continue...");
	clearConsole();
	
	//Choose Difficulty Screen
	printf(" _      ____ ____  ____ ____  ____ ____  ______ __ __ \n");
	printf("| |    /    |    \|    |    \|    |    \|      |  |  |\n");
	printf("| |   |  o  |  o  )|  ||  D  )|  ||  _  |      |  |  |\n");
	printf("| |___|     |     ||  ||    / |  ||  |  |_|  |_|  _  |\n");
	printf("|     |  _  |  O  ||  ||    \ |  ||  |  | |  | |  |  |\n");
	printf("|     |  |  |     ||  ||  .  \|  ||  |  | |  | |  |  |\n");
	printf("|_____|__|__|_____|____|__|\_|____|__|__| |__| |__|__|\n");
	printf("_--___-^_^-_--__^-_--__^-_--____-^_^-_-^_^-_---__^--__-\n");
	printf("\n");
	printf("Difficulty Level\n");
	printf("____________________\n");
	printf("1. Easy\n");
	printf("2. Medium\n");
	printf("3. Hard\n");
	printf("Choose your difficulty:");
	int N;
	scanf("%d",&N);
	clearConsole();
	if(N==1){
		printf("######################################\n");
		printf("#                                    #\n");
		printf("#           #                      P #\n");
		printf("#           #   l                    #\n");
		printf("#           #                        #\n");
		printf("#           # ######                 #	    I K J L  to move\n");
		printf("#                                    #\n");
		printf("#                      l             #\n");
		printf("#              #                   l #	 	LEGENDS\n");
		printf("#      #       #    O                #      _____________________________\n");
		printf("#      #       #               ##    #		P player\n");
		printf("#      #       #            #        #  	l mummy\n");
		printf("#              #              ###    #		O escape\n");
		printf("#           #                        #\n");
		printf("#           #             # ##       #\n");
		printf("#           #             #          #	    Press ENTER to exit\n");
		printf("#           #             #          #\n");
		printf("#           #                 #      #\n");
		printf("######################################\n");
		while (getchar() != '\n');
		return 0;
		}else if(N==2){
		printf("######################################\n");
		printf("#                 O #                #\n");
		printf("#            #              #        #\n");
		printf("#            #       l               #\n");
		printf("#            #         ####          #\n");
		printf("#       #                            #		I K J L  to move\n");
		printf("#  #    #         #       #          #\n");
		printf("#  #                  #              #\n");
		printf("#       #  l              #          #\		LEGENDS\n");
		printf("#           # l                      #		_____________________________\n");
		printf("#                 #                  #		P player\n");
		printf("#    #       #                       #		l mummy\n");
		printf("#    #            ##    #            #		O escape\n");
		printf("#                                    #\n");
		printf("#         #    #        #   #        #\n");
		printf("#              #                  ## #		Press ENTER to exit\n");
		printf("#       l  #      P        #   #     #\n");
		printf("#                 #          #       #\n");
		printf("######################################\n");	
		while (getchar() != '\n');
		return 0;
		}else if(N==3){
		printf("######################################\n");
		printf("#                    #               #\n");
		printf("# P                  #               #\n");
		printf("#       #                    ####### #\n");
		printf("#                  #                 #\n");
		printf("#         #####   l          # #     #		I K J L  to move\n");
		printf("#      #                           l #\n");
		printf("#    l #           ####      #       #\n");
		printf("#                          #         #		LEGENDS\n");
		printf("# ###           ### l                #		_____________________________\n");
		printf("#         ##            #      l     #		P player\n");
		printf("#         ##         ## #            #		l mummy\n");
		printf("#               ###                  #		O escape\n");
		printf("#    ###                   ######### #\n");
		printf("#    ###    l     ###   #     l      #\n");
		printf("#    ###                        #### #		Press ENTER to exit\n");
		printf("#     l               #            O #\n");
		printf("#                    l  #      #     #\n");
		printf("######################################\n");
		while (getchar() != '\n');
		return 0;
        }else{			
		while (getchar() != '\n');
    	refreshConsole();  
		}
	return 0;
}
