#include <stdio.h>
int main(){
    int num[10], max=0, n;
    
    for(int i=0; i<9; i++){
        scanf("%d", &num[i]);
        if(num[i] > max){
            max = num[i];
            n = i+1;
        }
    }
    printf("%d\n", max);
    printf("%d", n);    
    
    return 0;
}