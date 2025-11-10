#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 501

int cmp(const void *a, const void *b) {
    // 문자열 포인터를 가리키는 포인터이므로 이중 포인터로 캐스팅해야 함
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(void) {
    int N, M, count = 0;
    scanf("%d %d", &N, &M);

    char **S = malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++) {
        S[i] = malloc(sizeof(char) * LEN);
        scanf("%s", S[i]);
    }

    qsort(S, N, sizeof(char *), cmp);

    char word[LEN];
    for (int i = 0; i < M; i++) {
        scanf("%s", word);
        char *key = word;
        // 문자열의 주소를 전달해야 하므로 key의 주소(&key)를 넘김
        if (bsearch(&key, S, N, sizeof(char *), cmp) != NULL)
            count++;
    }

    printf("%d\n", count);

    for (int i = 0; i < N; i++)
        free(S[i]);
    free(S);

    return 0;
}
