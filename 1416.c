#include <stdio.h>

int main(){
    int n;
    int binary[32]={0};
    scanf("%d",&n);
    int m=0;
    if(n==0){printf("%d",0);}
    while(n>0){
        binary[m]=n%2;
        n = n/2;
        m++;
    }
    for(int i=m-1; i>=0; i--){
        printf("%d",binary[i]);
    }
    return 0;
}