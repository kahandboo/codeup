#include <stdio.h>

int main(){
    int n;
    int k[1001] = {};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&k[i]);
    }
    for(int j=n; j<n*2; j=j+n){
        for(int l=0; l<n; l++){
            k[j+l]=k[l];
        }
    }
    for(int p=0; p<n; p++){
        for(int q=0; q<n; q++){
            printf("%d ",k[q+p]);
        }
        printf("\n");
    }
    return 0;
}