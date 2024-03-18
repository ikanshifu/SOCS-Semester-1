#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);

    if (x <= k && y>=k) {
        int t;
		if(x < k){
            t=k-x;
        }else{
            t=x-k;
        }
        printf("%d\n",t);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
