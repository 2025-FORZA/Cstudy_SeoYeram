#include <stdio.h>
int main(){
    int n, max=0;
    float score[1001], sum=0;
    
    //입력받고 max 찾기
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%f ", &score[i]);
        if(score[i]>max) max = score[i];
    }
    
    //점수 재설정
    for(int i=0; i<n; i++){
        score[i] = score[i]/max*100;
        sum += score[i];
    }
    
    printf("%f", sum/n);
    return 0;
}