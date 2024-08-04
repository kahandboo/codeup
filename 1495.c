#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    int **arr;
    arr = (int**) malloc ( sizeof(int*) * n );
    for(int i=0; i<n; i++){
        arr[i] = (int*) calloc (m , sizeof(int));
    }
    int x1,x2,y1,y2,u;
    for(int i=0; i<l; i++){
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&u);
        if (x1 < n && y1 < m) {
            arr[x1][y1] += u;
        }
        if (x2 + 1 < n && y2 + 1 < m) {
            arr[x2 + 1][y2 + 1] += u;
        }
        if (x1 < n && y2 + 1 < m) {
            arr[x1][y2 + 1] -= u;
        }
        if (x2 + 1 < n && y1 < m) {
            arr[x2 + 1][y1] -= u;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (i > 0) arr[i][j] += arr[i-1][j];
            if (j > 0) arr[i][j] += arr[i][j-1];
            if (i > 0 && j > 0) arr[i][j] -= arr[i-1][j-1];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
    return 0;
}