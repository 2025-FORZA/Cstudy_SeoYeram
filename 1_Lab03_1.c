// 같은눈 3개 10000+1000*x
// 같은눈 2개 10000+100*x
// 다 다른눈 (가장큰눈)*100

#include <stdio.h>
int main(){
    int A, B, C;
    int score;
    scanf("%d %d %d", &A, &B, &C);
    
    if(A==B)
        {if(B==C) score=10000+1000*A;    //ABC같음
        else score=1000+100*A;}    //AB같음
    else if(B==C) score=1000+100*B;    //BC같음
    else if(A==C) score=1000+100*A;    //AC같음
    
    //가장 큰 눈 찾기
    else if(A<B)
        {if(B<C) score=100*C;
        else score=100*B;}
    else if(C>A) score=100*C;
    else score=100*A;
            
    printf("%d", score);
    return 0;
    }
    
    