#include <stdio.h>

int main(){
    int num[23]={};
    int n,p;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&p);
        num[p-1]++;
    }
    for(int j=0; j<23; j++){
        printf("%d ",num[j]);
    }

    return 0;
}