#include <stdio.h>
#include <string.h>
int main(){
    char a[7]={}, b[7]={}, aMin[7], aMax[7], bMin[7], bMax[7];
    
    scanf("%s %s", a, b);
    for(int i=0; i<7; i++){
        aMin[i] = a[i];
        aMax[i] = a[i];
    }
    for(int i=0; i<7; i++){
        bMin[i] = b[i];
        bMax[i] = b[i];
    }
    
    //6을 5로
    for(int i=0; i<strlen(aMin); i++){
        if(aMin[i] == '6') aMin[i]='5';
    }
    for(int i=0; i<strlen(bMin); i++){
        if(bMin[i] == '6') bMin[i]='5';
    }
    printf("%d ", atoi(aMin) + atoi(bMin));
    
    //5를 6으로
    for(int i=0; i<strlen(aMax); i++){
        if(aMax[i] == '5') aMax[i]='6';
    }
    for(int i=0; i<strlen(bMax); i++){
        if(bMax[i] == '5') bMax[i]='6';
    }
    printf("%d", atoi(aMax) + atoi(bMax));
    
    return 0;
}