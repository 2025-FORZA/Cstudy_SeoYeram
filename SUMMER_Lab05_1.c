#include <stdio.h>
int main(){
    int n, p=1;
    
    scanf("%d", &n);
    for(int i=n; i>1; i--){
        p *= i;
    }
    printf("%d", p);
    return 0;
}