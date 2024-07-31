#include <stdio.h>

int main(){
    int i,j;
    for(i=1; i<10; i++){
        for(j=2; j<6; j++){
            printf("%d x %d = %2d",j,i,j*i);
            if(j==5){
                printf("\n");
            }
            else{printf("\t");}
        }
    }
    return 0;
}