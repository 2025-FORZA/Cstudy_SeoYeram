#include <stdio.h>
#include <string.h>
int main(){
    int n, score, plus;
    char answer[81];
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        score = plus = 0;
        scanf("%s", answer);
        
        for(int j=0; j<strlen(answer); j++){
            if(answer[j] == 'O'){
                if(answer[j-1] == 'O'){
                    plus++;
                    score += plus + 1;
                }
                else{
                    score++;
                }
            }
            else plus = 0;
        }
        printf("%d\n", score);
    }
    
    return 0;
}