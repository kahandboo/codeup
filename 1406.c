#include <stdio.h>

int main(){
    char word[15];
    fgets(word,15,stdin);
    char love[4]={'l','o','v','e'};
    int score = 0;
    int i=0;
    while(i<4){
        if(word[i]==love[i]){
            score++;
        }
        i++;
    }
    if(score==4 && (word[i]=='\0'|| word[i]=='\n')){
        printf("I love you.");
    }
    
    return 0;
}