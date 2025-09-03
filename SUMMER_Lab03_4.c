#include <stdio.h>
int main(){
    int n, can=0, count;
    
    scanf("%d", &n);
    for(int i=n/5; i>=0; i--){
        if((n-5*i)%3 == 0){
            can = 1;
            count = i + (n-5*i)/3;
            break;
        }
    }
    
    if(can != 1) printf("-1");
    else printf("%d", count);
    
    return 0;
}