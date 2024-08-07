#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[50000];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int order[50000];
    order[0] = 0;

    for(int i=0; i<n; i++){
        for(int j=1+i; j<n+1; j++){
            if(arr[i]>arr[j]){
                order[j] = order[i];
                order[i] = order[j]+1;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",order[i]);
    }

    return 0;
}