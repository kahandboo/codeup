#include <stdio.h>

int main(){
    char word[100];
    fgets(word,sizeof(word),stdin);
    int c_count = 0;
    int cc_count = 0;
    int i=0;
    while(word[i]!='\n' && word[i]!='\0'){
        if(word[i]=='c' || word[i]=='C'){
            c_count++;
        }
        i++;
    }
    i=0;
    while(word[i]!='\n' && word[i]!='\0'){
        if(word[i]=='c' || word[i]=='C'){
            if(word[i+1]=='c' || word[i+1]=='C'){
                cc_count++;
            }
        }
        i++;
    }
    printf("%d\n%d",c_count,cc_count);
    return 0;
}