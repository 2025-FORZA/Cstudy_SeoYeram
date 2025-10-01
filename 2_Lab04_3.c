#include <stdio.h>
int main(){
    int m, n, count=0;
    
    scanf("%d %d", &m, &n);
    
    while(n>0 && m>0){
        if(n>0){
            count++;
            m--;
        }
        if(m>0){
            count++;
            n--;
        }
    }
    
    printf("%d", count-1); 
    
    return 0;
}