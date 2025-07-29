#include <stdio.h>
#define swap(a, b) {int temp=a; a=b; b=temp;}

int main(){
    int dice[6];
    scanf("%d %d %d %d %d", &dice[1], &dice[2], &dice[3], &dice[4], &dice[5]);
    
    for(int i=1; i<5; i++){
        if (dice[i]>dice[i+1]) {
            swap(dice[i], dice[i+1]);
            printf("%d %d %d %d %d\n", dice[1], dice[2], dice[3], dice[4], dice[5]);
        }
        if (dice[1]==1 && dice[2]==2 && dice[3]==3 && dice[4]==4 && dice[5]==5) break;
        else if (i==4) i=0;
    }
        
        
         
    
    return 0;
}