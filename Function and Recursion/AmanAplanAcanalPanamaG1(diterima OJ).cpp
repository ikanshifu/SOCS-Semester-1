#include <stdio.h>
#include <string.h>

int checkPalindrome(char text[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (text[start] == text[end]) {
        return checkPalindrome(text, start + 1, end - 1);
    }
    return 0;
}

int main() {
    int T;
    scanf("%d", &T);getchar();
    for (int tc = 1; tc <= T; tc++) {
        char text[1005];
        scanf("%s", text);getchar();
        int length = strlen(text);
        int valid = checkPalindrome(text, 0, length - 1);
		if(valid == 1){
			printf("Case #%d: yes\n", tc);
		}else{
			printf("Case #%d: no\n", tc);
		}
    }

    return 0;
}

