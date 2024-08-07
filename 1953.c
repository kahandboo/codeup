#include <stdio.h>

int n;

void stars(int count){
    if(count>0){
        printf("*");
        stars(count-1);
    }
}

int triangle(int i,int n){
    if(i<n){
        stars(i+1);        
        printf("\n");
        triangle(i+1,n);
    }
}

int main(){
    scanf("%d",&n);
    triangle(0,n);
    return 0;
}