#include <stdio.h>

int factorial(int n,int* sum){
    if(n!=0){
        *sum = *sum * n;
        factorial(n-1,sum);}
    else{
        return 0;
    }
}

int main(){
    int n;
    int sum=1;
    scanf("%d",&n);
    factorial(n,&sum);
    printf("%d",sum);
    return 0;
}