#include <stdio.h>
int main(){
    int n, f[21];
    scanf("%d", &n);
    f[0] = 0; f[1] = 1;
    
    if(n==0) printf("%d", 0);
    else if(n==1) printf("%d", 1);
    else{
        for(int i=0; i<n-1; i++){
            f[i+2] = f[i] + f[i+1];
        }
        printf("%d", f[n]);
    }
    
    return 0;
}