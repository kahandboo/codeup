#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=0; i<n*2-1; i++){
        if(i<n){
            for(j=1; j<n-i; j++){
                printf(" ");
            }
            for(k=0; k<1+2*i; k++){
                printf("*");
            }
            for(j=1; j<n-i; j++){
                printf(" ");
            }
            printf("\n");
        }
        else{
            for(j=0; j<i-n+1; j++){
                printf(" ");
            }
            for(k=0; k<4*n-3-2*i; k++){
                printf("*");
            }
            for(j=0; j<i-n+1; j++){
                printf(" ");
            }
            printf("\n");            
        }
    }
    return 0;
}