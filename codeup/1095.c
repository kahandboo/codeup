#include <stdio.h>

int main(){
    int n,r;
    scanf("%d",&n);
    int num[10000]={};
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    r = num[0];
    for(int j=1; j<n; j++){
        if(r>num[j])
        r = num[j];
    }

    printf("%d",r);
    return 0;
}