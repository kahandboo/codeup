#include <stdio.h>

int main(){
    char a;
    do{
        scanf("%s",&a);
        printf("%c",a);
        printf("\n");
    }while(a!='q');
    return 0;
}