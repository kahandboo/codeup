#include <stdio.h>

int main(){
    int sum = 0;
    int a,b;
    scanf("%d",&b);
    for(a=1; a<=b; a++){
        if(a%2==0) sum = sum + a;
    }
    printf("%d",sum);
    return 0;
}