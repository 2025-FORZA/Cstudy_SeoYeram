#include <stdio.h>
#include <string.h>
#define MAX 2501


int main(){
	char arr[MAX]; //본문 문자열(최대 2500자)
	char str[51]; //찾을 단어
	int cnt=0, i=0, pos=0, temp=0;
	gets(arr);
	gets(str); //실제 코딩에서는 오버플로우 위험 o
	
	while(i < strlen(arr)){ //본문 문자열의 길이 번까지 탐색
		if(arr[i++] != str[pos++])	{ //본문의 i번째 글자와 찾으려는 단어가 다르면
			pos = 0; //pos는 0 
			temp++; 
			i = temp; //본문에서 탐색 시작 위치를 한 칸 옮김
		} 
		else if(pos == strlen(str)){ //찾을 단어까지 pos가 끝까지 다 왔을때
			cnt++; // 카운트 증가
			pos = 0; //처음부터 다시 단어비교 시작
			temp = i; //다음 위치부터 새로 탐색하도록
		}
	}
	printf("%d", cnt);
	return 0;
}