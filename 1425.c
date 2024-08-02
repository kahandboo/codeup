#include <stdio.h>

int main(){
    int n,c;
    scanf("%d %d",&n,&c);
    int height[99]={0};
    for(int i=0; i<n; i++){
        scanf("%d",&height[i]);
    }
    
    int k=0;
    while(height[k]!=0){
        for(int l=0; l<c; l++){
            printf("%d ",height[k]);
            k++;
        }
        printf("\n");
    }
    return 0;
}