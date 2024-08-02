#include <stdio.h>

int main(){
    char bracket[100000]={};
    int n = 0;
    int m = 0;
    scanf("%s",&bracket);
    for(int i=0; i<100000; i++){
        if(bracket[i]=='('){
            n++;
        }
        if(bracket[i]==')'){
            m++;
        }
    }
    printf("%d %d",n,m);
    return 0;
}