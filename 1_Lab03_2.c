//N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램
//N * 1 = N

#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    
    for(int i=1; i<10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
return 0;      
    
}