#include <stdio.h>

#define MAX_FRIENDS 100
#define MAX_ROOMS 100

int main() {
    int T;
    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; testCase++) {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int patterns[MAX_FRIENDS][MAX_ROOMS];
        int visitOrder[MAX_FRIENDS];

        // Input the patterns
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &patterns[i][j]);
            }
        }

        // Input the order in which friends will visit
        for (int i = 0; i < Q; i++) {
            scanf("%d", &visitOrder[i]);
        }

        printf("Case #%d:\n", testCase);

        // Simulate the visits
        for (int room = 0; room < M; room++) {
            int isOn = 0;  // 0 represents off, 1 represents on

            for (int fren = 0; fren < Q; fren++) {
                int currentFriend = visitOrder[fren] - 1;

                if (patterns[currentFriend][room] == 1) {
                    isOn = 1 - isOn;  // Toggle the state
                }
            }

            // Output the result for the current room
            printf("%s\n", isOn ? "YES" : "NO");
        }
    }

    return 0;
}

