#include <stdio.h>
int main(){
    int n, count, f[1001];
    
    //f[n] = f[n-1] + f[n-2] + f[n-2]    1*2한개놓을경우, 2*1두개(가로)놓을경우, 2*2한개놓을경우
    f[1] = 1;
    f[2] = 3;
    
    scanf("%d", &n);
    if(n==1) printf("1");
    else if(n==2) printf("3");
    else{
        for(int i=3; i<=n; i++){
            f[i] = (f[i-1] + 2*f[i-2])%10007;
        }
        printf("%d", f[n]);
    }
    return 0;
}