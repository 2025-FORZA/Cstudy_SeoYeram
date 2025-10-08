#include <stdio.h>
#include <string.h>
int main(){
    int t, n;
    char str[21];
    
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        scanf("%s", str);
        for(int j=0; j<strlen(str); j++){    //받은 문자열 글자수만큼
            for(int k=0; k<n; k++){            //n만큼 반복출력
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}