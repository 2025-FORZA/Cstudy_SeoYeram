#include <stdio.h>
int main(){
    int n, std, score[1000];
    float avg;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){        //아래 과정을 n번 반복
        
        int sum = 0;               //sum, count 초기화
        int count = 0;
        
        scanf("%d", &std);         //학생 수
        for(int j=0; j<std; j++){
            scanf(" %d", &score[j]);
            sum += score[j];
        }
        avg = (float)sum/std;             //평균 구하기
        for(int j=0; j<std; j++){
            if((float)score[j]>avg) count++;
        }
        printf("%.3f%%\n", (float)count/std*100);
        
    }
    
    return 0;
}