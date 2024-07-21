#include <stdio.h>

int main(){
    int n,x,y;
    int a[20][20]={};
    for(int j=0; j<19; j++){
        for(int k=0; k<19; k++){
            scanf("%d",&a[j][k]);
        }
    }
    scanf("%d",&n);
    for(int k=0; k<n; k++){
        scanf("%d %d",&x,&y);
        for(int l=0; l<19; l++){
            if(a[l][y-1]==0)a[l][y-1] = 1;
            else a[l][y-1] = 0;
        }
        for(int l=0; l<19; l++){
            if(a[x-1][l]==0)a[x-1][l] = 1;
            else a[x-1][l] = 0;
        }
    }
    for(int j=0; j<19; j++){
        for(int k=0; k<19; k++){
            printf("%d ",a[j][k]);
        }
        printf("\n");
    }
    return 0;
}