#include <stdio.h>

int sum=0;
int factorial(int n,int* sum){
    if(n!=0){
        *sum += n;
        factorial(n-1,sum);}
    else{
        return 0;
    }
}
int SuperSum(int k,int n){
    if(n>=1){
        sum += SuperSum(k-1,n-1);
    }
    else{
        return sum;
    }
}

int main(){
    int n,k;
    while( scanf("%d %d", &k, &n) != EOF ){
        printf("%d\n", SuperSum(k, n));
    }
    return 0;
}