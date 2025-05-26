#include <stdio.h>
int main(){
    int n, num, loc, count=0;
    int cow[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &num, &loc);
        if(cow[num-1] == -1){
            cow[num-1] = loc;
        }
        else if(cow[num-1] != loc){
            count++;
            cow[num-1] = loc;
        }
    }
    
    printf("%d", count);
    return 0;
}