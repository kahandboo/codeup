#include <stdio.h>

    int n;
    int a=1;
int printfN(int a){

    if(a==n){
        printf("%d",n);
        return 0;
        }
    else{
        printf("%d\n",a);
        return printfN(a+1);
    }
}

int main(){
    scanf("%d",&n);
    printfN(a);
}