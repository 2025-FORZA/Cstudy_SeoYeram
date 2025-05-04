#include <stdio.h>
#define Sum(i,j) i+j
int main(){
    int a, b, num;
    scanf("%d", &num);
    for(int i =0; i<num; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", Sum(a, b));
}

    return 0;
}