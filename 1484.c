#include <stdio.h>
#include <malloc.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int **arr;
    arr = (int**) malloc ( sizeof(int*) * n );
    for(int i=0; i<n; i++){
        arr[i] = (int*) malloc ( sizeof(int) * m );
    }
    int a=n;
    int b=m;
    int num=1;
    arr[0][0] = 0;
    while(n!=0 && m!=0){
        for(int i=0; i<m; i++){
            arr[0][i] +=1;
        }
        m--;
        for(int i=1; i<n; i++){
            arr[i][m] = arr[i-1][m]+1;        
        }
        n--;
        for(int i=m-1; i>=0; i--){
            arr[n-1][i] = arr[n-1][i+1] + 1;
        }
        m--;
        for(int i=n-1; i>0; i--){
            arr[i][0] = arr[i+1][0] + 1;
        }
        n--;        
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}