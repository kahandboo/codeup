#include <stdio.h>

int arr[51][51];


int pascal(int r,int c){
    arr[r][c] =
}

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i=1; i<51; i++){
        arr[1][i]=1;
    }
    for(int i=1; i<51; i++){
        arr[i][1]=1;
    }
    printf("%d",pascal(r,c)%100000000);
    return 0;
}