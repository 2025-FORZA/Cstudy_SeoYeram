#include <stdio.h>
#include <string.h>
int main(){
    char word[101], ch;
    char *pword = NULL;
    
    scanf("%s", word);
    
    for(ch = 'a'; ch <= 'z'; ch++){
            pword = strchr(word, ch);
            if(pword != NULL){
                printf("%d ", pword - word);
            }
            else if(pword == NULL){
                printf("-1 ");
            }
    }
    
    
    return 0;
}