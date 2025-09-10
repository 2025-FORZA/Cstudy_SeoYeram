#include <stdio.h>
int main(){
    int n, floor, num, room[15][15]={0};
    
    for(int i=0; i<=14; i++){
        room[0][i] = i;
    }
    for(int i=1; i<=14; i++){
        for(int j=1; j<=14; j++){
            room[i][j] = room[i][j-1] + room[i-1][j];
        }
    }
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d\n%d", &floor, &num);
        printf("%d\n", room[floor][num]);
    }
    
    return 0;
}