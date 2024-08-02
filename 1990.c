#include <stdio.h>

int main(){
    char n[501];
    fgets(n,sizeof(n),stdin);
    int sum = 0;
    int i = 0;
    while(n[i]!='\0' && n[i]!='\n'){
        sum = sum + n[i] - 48;
        i++;
    }
    if(sum%3==0){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}