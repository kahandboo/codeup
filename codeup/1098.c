#include <stdio.h>

int main(){
    int h,w,n,l,d,x,y;
    int a[100][100]={};
    scanf("%d %d",&h,&w);
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d %d",&l,&d,&x,&y);
        for (int j = 0; j < l; j++) {
            a[x-1][y-1] = 1; 
            if (d == 0) {
                y++; 
            } else {
                x++; 
            }
        }
    }
    for(int j=0; j<h; j++){
        for(int k=0; k<w; k++){
            printf("%d ",a[j][k]);
        }
        printf("\n");
    }
    return 0;
}