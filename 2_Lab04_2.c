#include <stdio.h>
int main(){
    int ball[100]={0}, n, m, i, j, k;
    
    scanf("%d %d", &n, &m);
    for(int a=0; a<m; a++){
        scanf("%d %d %d", &i, &j, &k);
        for(int b=i; b<=j; b++){
            ball[b-1] = k;
        }
    }
    for(int a=0; a<n; a++){
        printf("%d ", ball[a]);
    }
    
    return 0;
}