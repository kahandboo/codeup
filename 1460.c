#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}