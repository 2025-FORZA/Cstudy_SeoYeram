#include <stdio.h>
int main(){
    int n, h, w, num, floor, room;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &h, &w, &num);
        if (num%h==0){
            floor = h;
            room = num/h;
        }
        else{
            floor = num%h;
            room = num/h+1;
        }
        
        
        if (room>=10){
            printf("%d%d\n", floor, room);
        }
        else{
            printf("%d%d%d\n", floor, 0, room);
        }
    }
    
    
    return 0;
}