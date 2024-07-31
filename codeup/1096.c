#include <stdio.h>

int main(){
    int n,x,y;
    int a[20][20]={};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&x,&y);
        a[x-1][y-1] = 1;
    }
    for(int j=0; j<19; j++){
        for(int k=0; k<19; k++){
            printf("%d ",a[j][k]);
        }
        printf("\n");
    }
    return 0;
}