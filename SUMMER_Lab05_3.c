#include <stdio.h>
#include <string.h>
int main(){
    int temp;
    char s[7];
    
    while(1){
        scanf("%s", s);
        if(*s == '0') break;
        
        printf("%s ", s);
        while(strlen(s) != 1){
            temp = 1;
            for(int i=0; i<strlen(s); i++){
                temp *= s[i] - '0';        //문자를 숫자로 계산하는 방법
            }
            sprintf(s, "%d", temp);
            printf("%s ", s);
        }
        printf("\n");
    }
    return 0;
}