#include <stdio.h>

int Collatz(int n){
    if(n==1){
        return 0;
    }
    else{
        if(n%2!=0){
            printf("%d\n",3*n+1);
            if(3*n+1==1){
                return 0;
            }
            Collatz(3*n+1);
        }
        else{
            printf("%d\n",n/2);
            if(n/2==1){
                return 0;
            }
            Collatz(n/2);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    Collatz(n);
    return 0;
}