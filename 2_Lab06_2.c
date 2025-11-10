// 백준 1436: 영화감독 숌 (C 언어)
#include <stdio.h>
#include <stdlib.h> // exit 함수를 위해 (필수는 아님)
#include <string.h> // strstr 함수를 위해

int main() {
    // N을 입력받음 (N번째 종말의 숫자를 찾을 값)
    int N;
    scanf("%d", &N);
    
    // '종말의 숫자'를 찾았을 때 카운트
    int count = 0; 
    // 666부터 시작
    int num = 666; 
    
    // 숫자를 문자열로 변환할 때 사용할 버퍼 (최대 int 범위는 10자리이므로 10 + 1(널 문자) + 여유분)
    char str_num[10 + 5]; 
    
    // 무한 루프를 돌면서 N번째 수를 찾을 때까지 숫자를 1씩 증가시키며 확인
    while (1) {
        // 1. 현재 숫자(num)를 문자열(str_num)로 변환
        // sprintf 함수는 정수형 변수를 문자열 버퍼에 저장해줌.
        sprintf(str_num, "%d", num);
        
        // 2. 문자열 안에 "666"이 포함되어 있는지 확인
        // strstr(전체 문자열, 찾을 문자열) 함수는 찾을 문자열이 있으면 그 위치의 포인터를 반환하고, 
        // 없으면 NULL을 반환함.
        if (strstr(str_num, "666") != NULL) {
            // "666"이 포함되어 있으면 카운트 증가
            count++;
        }
        
        // 3. 만약 찾으려는 N번째 종말의 숫자라면
        if (count == N) {
            // 그 숫자를 출력하고 반복문 탈출
            printf("%d\n", num);
            break; // while(1)을 탈출
        }
        
        // 4. 다음 숫자로 넘어감
        num++;
    }
    
    return 0;
}