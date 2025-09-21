#include <stdio.h>
int main(){
    int num, std[31]={0};
    
    for(int i=0; i<28; i++){
        scanf("%d", &num);
        std[num] = 1;
    }
    
    for(int i=1; i<=30; i++){
        if(std[i] == 0) printf("%d\n", i);
    }
    
    return 0;
}