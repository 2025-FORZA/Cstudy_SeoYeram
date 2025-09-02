#include <stdio.h>
#define switch(a, b) do{int temp=a; a=b; b=temp;} while(0)
int main(){
    int n, m, card[101][101], score[101]={0}; 
    
    //입력, 크기순으로 줄세우기
    scanf("%d %d", &n, &m);    //n이 명수, m이 라운드 수
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d ", &card[i][j]);    //i가 사람번호, j가 라운드 수
            for(int k=j; k-1>=0; k--){
                if(card[i][k-1] < card[i][k]) switch(card[i][k-1], card[i][k]);
                else break;
            }
        }
    }
    
    //하나씩 비교
    for(int i=0; i<m; i++){    //3라운드로 구성
        int max = 0;
        for(int j=0; j<n; j++){    //5명을 비교
            if(card[j][i] >= max){
                max = card[j][i];    //최종 max값 도출
            }
        }
        for(int j=0; j<n; j++){
            if(card[j][i] == max){
                score[j]++;        //그 값을 가진 사람에게 점수
            }
        }
        
    }
    
    //우승자 찾기
    int max=0;
    for(int i=0; i<n; i++){    //5명 비교
        if(score[i] >= max){
            max = score[i];
        }
    }
   //우승자 출력
    for(int i=0; i<n; i++){
        if(score[i] == max){
            printf("%d ", i+1);    //0번째 사람의 번호는 1이니까
        }
    }
    
    return 0;
}