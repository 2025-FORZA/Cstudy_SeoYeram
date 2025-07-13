#include <stdio.h>
typedef struct member {
    int age;
    char name[101];
}Member;

int main(){
    int n, min=200, max=1;
    Member m[100001];
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){       
        scanf("%d %s", &m[i].age, m[i].name);
        if(m[i].age<=min) min=m[i].age;
        if(m[i].age>=max) max=m[i].age;
    }
    
    for(int j=min; j<=max; j++){
        for(int i=0; i<n; i++){
            if(j == m[i].age){
                printf("%d %s\n", m[i].age, m[i].name);
                m[i].age = 201;
            }
        }
        min++;
        
    }
    
    return 0;
}