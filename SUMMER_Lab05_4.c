#include <stdio.h>
int main(){
    int n;
    char dna[1000001];
    
    scanf("%d", &n);        //6
    scanf("%s", dna);        //aagtcg
    for(int i=n-1; i>0; i--){    //54
        if(dna[i-1]=='A'){
            if(dna[i]=='A') dna[i-1]='A';
            else if(dna[i]=='G') dna[i-1]='C';
            else if(dna[i]=='C') dna[i-1]='A';
            else if(dna[i]=='T') dna[i-1]='G';
            continue;
        }
        else if(dna[i-1]=='G'){
            if(dna[i]=='A') dna[i-1]='C';
            else if(dna[i]=='G') dna[i-1]='G';
            else if(dna[i]=='C') dna[i-1]='T';
            else if(dna[i]=='T') dna[i-1]='A';
            continue;
        }
        else if(dna[i-1]=='C'){
            if(dna[i]=='A') dna[i-1]='A';
            else if(dna[i]=='G') dna[i-1]='T';
            else if(dna[i]=='C') dna[i-1]='C';
            else if(dna[i]=='T') dna[i-1]='G';
            continue;
        }
        else if(dna[i-1]=='T'){
            if(dna[i]=='A') dna[i-1]='G';
            else if(dna[i]=='G') dna[i-1]='A';
            else if(dna[i]=='C') dna[i-1]='G';
            else if(dna[i]=='T') dna[i-1]='T';
            continue;
        }
    }
    printf("%c", dna[0]);
    return 0;
}