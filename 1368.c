#include <stdio.h>

int main(){
    int h,k;
    char d;
    scanf("%d %d %c",&h,&k,&d);
    int i,j,l;
    for(i=0; i<h; i++){
        if(d=='L'){
            for(l=0; l<i; l++){
                printf(" ");
                }
            for(j=0; j<k; j++){
                printf("*");
                }
            printf("\n");
            }                
        if(d=='R'){
            for(l=i+1; l<h; l++){
                printf(" ");
                }
            for(j=0; j<k; j++){
                printf("*");
                }
            printf("\n");
        }
    }
    return 0;
}