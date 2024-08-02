#include <stdio.h>

int main(){
    char sen[90] = {};
    int abc[127] = {0};
    fgets(sen,sizeof(sen),stdin);
    for(int i=0; i<90; i++){
        if(sen[i]!='\0'&&sen[i]!=' '){
            abc[sen[i]]++;
        }
    }
    for(int j=96; j<122; j++){
        printf("%c:%d",j+1,abc[j+1]);
        printf("\n");
    }
    return 0;
}