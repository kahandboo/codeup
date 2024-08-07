#include <stdio.h>


void printf_odd(int n,int b){
    if(n > b){
        return;
    }
    if(n%2!=0 && n<=b){
        printf("%d ",n);
        return printf_odd(n+2,b);
    }
    else{
        printf_odd(n+1,b);
    }

}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    
    printf_odd(a,b);
    return 0;
}