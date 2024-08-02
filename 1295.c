#include <stdio.h>

int main(){
    char sen[1000];
    fgets(sen,1000,stdin);
    int i=0;
    while(sen[i]!='\0' && sen[i]!='\n'){
        if(sen[i]>='A' && sen[i]<= 'Z'){
            sen[i] = sen[i] + 32;
        }
        else if(sen[i]>='a' && sen[i]<='z'){
            sen[i] = sen[i] - 32;
        }
        i++;
    }
    printf("%s",sen);
    return 0;
}