#include <stdio.h>

int main() {
    long long C[31][31] = {0};  

    //dp
    for (int n=0; n<=30; n++) {
        C[n][0] = C[n][n] = 1;
        for (int k=1; k<n; k++) {
            C[n][k] = C[n-1][k-1] + C[n-1][k];
        }
    }

    int T; 
    scanf("%d", &T);
    while(T--){
        int N, M;               // N: 서쪽, M: 동쪽 (항상 1 ≤ N ≤ M ≤ 30)
        scanf("%d %d", &N, &M);
        printf("%lld\n", C[M][N]);  // 답 = M C N
    }
    return 0;
}