#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,g;
    scanf("%d %d",&n,&g);
    int *arr;
    arr = (int*) malloc ( sizeof(int) * n );

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int small_num[2];
    for (int i = 0; i < g-1; i++) {
        for (int j = 0; j < g-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    small_num[0] = arr[0];

    for (int i = g; i < n-1; i++) {
        for (int j = g; j < n-i-1+g; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    small_num[1] = arr[g];
    if(n==g){
        printf("%d",small_num[0]);
    }
    else{    
        for(int i=0; i<2; i++){
            printf("%d ",small_num[i]);
        }
    }


    return 0;
}