#include <stdio.h>
#include <string.h>
int main(){
    int count = 0;
    char sentence[16];
    
    scanf("%s", sentence);
    for(int i=0; i<strlen(sentence); i++){
        if(sentence[i] == 'A' || sentence[i] == 'B' || sentence[i] == 'C'){
            count += 3;
        }
        else if(sentence[i] == 'D' || sentence[i] == 'E' || sentence[i] == 'F'){
            count += 4;
        }
        else if(sentence[i] == 'G' || sentence[i] == 'H' || sentence[i] == 'I'){
            count += 5;
        }
        else if(sentence[i] == 'J' || sentence[i] == 'K' || sentence[i] == 'L'){
            count += 6;
        }
        else if(sentence[i] == 'M' || sentence[i] == 'N' || sentence[i] == 'O'){
            count += 7;
        }
        else if(sentence[i] == 'P' || sentence[i] == 'Q' || sentence[i] == 'R' || sentence[i] == 'S'){
            count += 8;
        }
        else if(sentence[i] == 'T' || sentence[i] == 'U' || sentence[i] == 'V'){
            count += 9;
        }
        else if(sentence[i] == 'W' || sentence[i] == 'X' || sentence[i] == 'Y' || sentence[i] == 'Z'){
            count += 10;
        }
    }    
    
    printf("%d", count);
    return 0;
}
