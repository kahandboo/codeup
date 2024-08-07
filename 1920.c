#include <stdio.h>

int binary(int n,int i,int arr[]){

    if(n>0){
        arr[i] = n%2;
        binary(n/2,i+1,arr);
    }
    else{
        if(i>0){
            printf("%d",arr[i-1]);
            binary(n,i-1,arr);
        }
    }
}

int main(){
    int n;
    int arr[31];
    scanf("%d",&n);
    if(n==0){printf("%d",0);
    return 0;}
    if(n==1){printf("%d",1);
    return 0;}
    binary(n,0,arr);
    return 0;
}