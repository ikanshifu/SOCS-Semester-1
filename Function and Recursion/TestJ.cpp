#include <stdio.h>

// Function to determine the winner of the game
char* gameWinner(int n) {
    // Jojo always starts first
    int isJojoTurn = 1;

    // Keep playing until the number becomes 1
    while (n != 1) {
        if (n % 2 == 0) {
            // If the number is even, halve it
            n /= 2;
        } else {
            // If the number is odd, multiply by three and increment
            n = 3 * n + 1;
        }

        // Switch turns
        isJojoTurn = !isJojoTurn;
    }

    // Determine the winner based on the last turn
    if(isJojoTurn = 1){
    	return "Jojo";
	}else{
		return "Lili";
	}

}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int i = 1; i <= T; ++i) {
        int N; // Starting number for each test case
        scanf("%d", &N);

        // Determine the winner for the current test case
        char* winner = gameWinner(N);

        // Output the result
        printf("Case #%d: %s\n", i, winner);
    }

    return 0;
}

