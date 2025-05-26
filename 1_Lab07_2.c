#include <stdio.h>
int main(){
    int n, wei, hei, count=0;
    int weight[200], height[200];
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){                // 입력받기
        scanf("%d %d", &wei, &hei);
        weight[i] = wei;
        height[i] = hei;
    }
    
    for(int i=0; i<n; i++){                // 배열 속 모든 원소끼리 비교해서 나보다 덩치 큰 사람을 count
        for(int j=0; j<n; j++){
            if(weight[i]<weight[j]){
                if(height[i]<height[j]){
                    count++;
                }
            }
        }
        printf("%d ", count+1);
        count = 0;
    }
    
    return 0;
}