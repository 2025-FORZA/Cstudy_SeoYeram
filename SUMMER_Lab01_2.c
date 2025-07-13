#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    //윗줄
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    
    //중간
    for(int i=0; i<2*n-1; i++){
        printf("*");
    }
    printf("\n");
    
    //아랫줄
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int k=0; k<2*(n-i)-1; k++){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}