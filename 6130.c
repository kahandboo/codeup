#include <stdio.h>

int main(){
    char expression[4];
    scanf("%s",expression);
    if(expression[2]=='+'){
        printf("-%0.2f",((double)(expression[3]-48)/(double)(expression[0]-48)));
    }
    else{
        printf("%0.2f",((double)(expression[3]-48)/(double)(expression[0]-48)));
    }
    return 0;
}