#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, min = 1000000;
    char n[8];
    
    scanf("%s", n);
    for(int i=atoi(n); i>0; i--){    //i는 생성자 후보
        num = i + i/1000000 + i%1000000/100000 + i%100000/10000 + i%10000/1000 + i%1000/100 
            + i%100/10 + i%100%10;    //num은 분해합 
        if(atoi(n) == num && i < min) min = i;
    }
    
    if(min==1000000) printf("0");
    else printf("%d", min);
    
    return 0;
}