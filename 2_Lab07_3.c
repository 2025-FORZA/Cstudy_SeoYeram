#include <stdio.h>
int main(){
    int n, m, w, b, score[2000], count=0;
    char board[51][51]={};
    
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%s", board[i]);
    }
    
    for(int i=0; i<=n-8; i++){    //세로 범위
        for(int j=0; j<=m-8; j++){    //가로 범위(i, j가 왼쪽 위 꼭짓점)
            w=b=0;
            for(int r=i; r<i+8; r++){
                for(int c=j; c<j+8; c++){
                    if((r+c)%2==0){        //짝수칸
                        if(board[r][c]=='W') b++;
                        else w++;
                    }
                    else{                //홀수칸
                        if(board[r][c]=='W') w++;
                        else b++;
                    }
                }
            }
            score[count]= (w>=b) ? b:w;
            count++;
        }
    }
    int min=64;
    for(int i=0; i<count; i++){
        if(score[i]<=min) min=score[i];
    }
    printf("%d", min);
         
    
    return 0;
}