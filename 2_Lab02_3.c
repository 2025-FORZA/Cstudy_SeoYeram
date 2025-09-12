#include <stdio.h>

int graph[101][101]; //그래프의 연결 상태를 저장할 인접 행렬
int visited[101] = {0, }; //방문 여부 저장
int N, M; // N: 컴퓨터 수 & M: 연결된 쌍의 수
int count = 0; //감염된 컴퓨터 수를 저장

//깊이 우선 탐색 (DFS) 함수 작성
void dfs(int v) {
    visited[v] = 1; //현재 노드 방문 표시
    count++; //감염된 컴퓨터 수 증가

    for (int i = 1; i <= N; i++) {
        //현재 노드 v와 연결되어 있고 아직 방문하지 않은 노드 i를 찾음
        if (graph[v][i] == 1 && visited[i] == 0) {
            dfs(i); //재귀적으로 탐색
        }
    }
}

int main() {
    int v1, v2;

    scanf("%d", &N); //컴퓨터 수 입력
    scanf("%d", &M); //연결된 쌍의 수 입력

    //인접 행렬 초기화 & 연결 정보 입력
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &v1, &v2);
        graph[v1][v2] = 1;
        graph[v2][v1] = 1; //양방향 연결
    }

    //1번 컴퓨터부터 탐색 시작
    dfs(1);

    //1번 컴퓨터 자신을 제외한 감염된 컴퓨터 수 출력
    printf("%d\n", count - 1);

    return 0;
}