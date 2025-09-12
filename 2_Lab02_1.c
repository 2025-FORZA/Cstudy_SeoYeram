#include <stdio.h>
int main(){
    int num[8], up = 0, down = 0;
    
    for(int i=0; i<8; i++){
        scanf("%d", &num[i]);
    }
    
    //
    if(num[0] == 1) up = 1;
    if(num[0] == 8) down = 1;
    

    for(int i=0; i<8; i++){
        if(num[i] == i+1 && up == 1){
            up = 1;
        }
        else{
            up = 0;
            break;
        }
    }

    

    for(int i=8; i>0; i--){
        if(num[8-i] == i && down == 1){
            down = 1;
        }
        else{
            down = 0;
            break;
        }
    }

    
    //
    if(up) printf("ascending");
    else if(down) printf("descending");
    else printf("mixed");
        
    return 0;
}