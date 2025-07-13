#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char word[201], order[21][200];
    
    scanf("%d", &n);
    scanf("%s", word);
    
    //표 만들기
    int a=0;
    for(int i=0; i<strlen(word)/n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                order[i][j] = word[a];
                a++;
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                order[i][j] = word[a];
                a++;
            }
        }
    }
    
    //출력
    for(int i=0; i<n; i++){
        for(int j=0; j<strlen(word)/n; j++){
            printf("%c", order[j][i]);
        }
    }
    
    return 0;
}