#include <stdio.h>
int main() {
    int N, F, ans=0;
    scanf("%d %d", &N, &F);

    for (int i = 0; i < 100; i++) {
        if (N % 100 == 0) break;
        else if (N % 100 == 99) N -= 99;
        else N++;
    }

    for (int i = 0; i < 100; i++) {
        if (N % F == 0) {
            ans = N;
            break;
        }
        else if (N % 100 == 99) N -= 99;
        else N++;
    }

    ans %= 100;
    if (ans % 10 == ans) {
        printf("0%d", ans);
    }
    else printf("%d", ans);

    return 0;
}