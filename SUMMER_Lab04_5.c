#include <stdio.h>
#include <string.h>

int main() {
    int j;
    char num[11], temp;
    
    scanf("%s", num);

    for(int i=1; i<strlen(num); i++){
        temp = num[i];
        for(j=i-1; j>=0; j--){
            if(num[j] < temp){
                num[j+1] = num[j];
            }
            else{
                break;
            }
        }
        num[j+1] = temp;
    }
    
    printf("%s", num);
    return 0;
}