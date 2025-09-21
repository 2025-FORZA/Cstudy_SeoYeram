#include <stdio.h>
int main(){
    char word[6][16]={}, w;  
    int max=0;
   
    for(int i=0; i<5; i++){
        int j=0;
        while(1){
            scanf("%c", &w);
            if(w == '\n') break;
            word[i][j] = w;
            j++;
            if(j>=max) max=j;
        }
    }
    
    for(int i=0; i<max; i++){        
        int j=0;
        while(j<5){
            if(word[j][i] == '\0'){
                j++;
            }
            else{
                printf("%c", word[j][i]);
                j++;
            }
        }
    }

    return 0;
}