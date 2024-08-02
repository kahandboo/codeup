#include <stdio.h>

int main(){
char word[15];
    fgets(word,15,stdin);
    char ioi[3]={'I','O','I'};
    int score = 0;
    int i=0;
    while(i<3){
        if(word[i]==ioi[i]){
            score++;
        }
        i++;
    }
    if(score==3 && (word[i]=='\0'|| word[i]=='\n')){
        printf("IOI is the International Olympiad in Informatics.");
    }
    else{
        printf("I don't care.");
    }
    
    return 0;
}