#include <stdio.h>

int main(){
    char str[100] = {};
    fgets(str, sizeof(str), stdin);
    for(int i=0; i<sizeof(str); i++){
        if(str[i]!=' '&&str[i]!='\0')
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}