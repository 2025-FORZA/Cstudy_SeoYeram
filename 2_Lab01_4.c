#include <stdio.h>
#include <string.h>
int main(){
    char word[101];
    
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++){
        if(word[i] <= 90) printf("%c", word[i]+32);
        else printf("%c", word[i]-32);
    }
    return 0;
}