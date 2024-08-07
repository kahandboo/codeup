#include <stdio.h>

int arr[20];



int fibonacci(int n,int a){
    arr[0]=1;
    arr[1]=1;
    if(n==1 || n==2){
        return 1;
    }

    else if(a<n){
        arr[a]=arr[a-1]+arr[a-2];
        fibonacci(n,a+1);}
    else if(a==n){
        return arr[a-1];
    }
}

int main(){
    int n;
    int a=2;
    scanf("%d",&n);

    printf("%d",fibonacci(n,a));
    return 0;
}