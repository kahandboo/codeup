#include <stdio.h>

int main(){
    int i,num, sum = 0;
    scanf("%d",&num);
    for(i = 1; i<=num; i++){
        sum = sum + i;
        if(sum < num){}
        else{
        printf("%d",i);
        break;
        }
    }
    return 0;
}