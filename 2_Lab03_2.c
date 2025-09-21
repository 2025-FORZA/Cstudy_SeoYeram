#include <stdio.h>
int main(){
    int att[5]={0}, score, maxScore=0, maxWho;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &score);
            att[i] += score;
        }
        if(att[i] > maxScore){
            maxWho = i;
            maxScore = att[i];
        }
    }
    
    printf("%d %d", maxWho+1, maxScore);
    
    return 0;
}