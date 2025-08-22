#include <stdio.h>
int main(){
    int num[11], count=0;
    
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }
    for(int i=0; i<43; i++){
        for(int j=0; j<10; j++){
            if(i == num[j]){
                count++;
                break;
            }
        }
    }
    
    printf("%d", count);
    return 0;
}