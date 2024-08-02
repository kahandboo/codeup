#include <stdio.h>

int main(){
    char password[20];
    fgets(password,sizeof(password),stdin);
    int i=0;
    while(password[i]!='\n' && password[i]!='\0'){
        printf("%c",password[i]+2);
        i++;
    }
    i=0;
    printf("\n");
    while(password[i]!='\n' && password[i]!='\0'){
        printf("%c",(password[i]*7)%80+48);
        i++;
    }

    return 0;
}