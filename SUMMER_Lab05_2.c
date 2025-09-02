#include <stdio.h>
int main(){
    int num, n, k[1001], sum=0, init;
    
    //입력
    scanf("%d %d", &num, &n);
    for(int i=0; i<n; i++){
        scanf("%d ", &k[i]);
    }
    
    //배수 찾기
    for(int i=0; i<n; i++){    //k[i]에서 하나씩    
        for(int j=1; j<=num; j++){    // j는 1 이상 num 이하 수(하나씩검토)    
            init = 0;
            for(int l=0; l<i; l++){    //이전 k랑도 배수면 init=1
                if(j%k[l]==0){
                    init=1;
                    break;
                }
            }
            if(j%k[i]==0 && init == 0) sum+=j;
        }              
    }
    printf("%d", sum);
    return 0;
}