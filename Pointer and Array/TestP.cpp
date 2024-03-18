#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int teams[N + 1]; // Array to store the count of each team
    for (int i = 0; i <= N; i++) {
        teams[i] = 0; // Initialize team counts to 0
    }

    // Input the team numbers from the shirts
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int shirtNumber;
            scanf("%d", &shirtNumber);

            // Increment the count for the team, or ignore for spectators (team 0)
            if (shirtNumber > 0) {
                teams[shirtNumber]++;
            }
        }
    }

    // Count incomplete teams
    int incompleteTeams = 0;
    for (int i = 1; i <= N; i++) {
        if (teams[i] < N) {
            incompleteTeams++;
        }
    }

    // Output the result
    printf("%d\n", incompleteTeams);

    return 0;
}

