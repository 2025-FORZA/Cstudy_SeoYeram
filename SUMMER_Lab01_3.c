#include <stdio.h>
int main(){
    int n, m, order[101], temp, a, b;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        order[i] = i+1;
    }
    
    for(int j=0; j<m; j++){
        scanf("%d %d", &a, &b);
        for(int k=0; k<(b-a+1)/2; k++){
            temp = order[a-1+k];
            order[a-1+k] = order[b-1-k];
            order[b-1-k] = temp;
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", order[i]);
    }
    
    return 0;
}