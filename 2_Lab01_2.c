#include <stdio.h>
int main(){
    int x, y, w, h, minW, minH;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    //가로 중 최소길이
    if(w-x < x) minW = w-x;
    else minW = x;
    
    //세로 중 최소 길이
    if(h-y < y) minH = h-y;
    else minH = y;
    
    if(minH <= minW) printf("%d", minH);
    else printf("%d", minW);
    
    return 0;
}