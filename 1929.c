#include <stdio.h>

int Collatz(int n,int arr[],int i){
    if(n==1 && i>=0){
        printf("%d\n",arr[i]);
        Collatz(1,arr,i-1);
    }
    else if(n>1){
        if(n%2!=0){
            arr[i] = 3*n+1;
            if(3*n+1==1){
                return Collatz(1,arr,i);
            }
            Collatz(3*n+1,arr,i+1);
        }
        else{
            arr[i] = n/2;
            if(n/2==1){
                return Collatz(1,arr,i);
            }
            Collatz(n/2,arr,i+1);
        }
    }
}

int main(){
    int n;
    int arr[685];
    scanf("%d",&n);
    if(n==1){
        printf("%d\n",n);
    }
    else{
        Collatz(n,arr,0);
        printf("%d",n);
    }
    return 0;
}