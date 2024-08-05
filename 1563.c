#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(n,m,x){
    int arr[3] = {n,m,x};
    int temp = arr[0];
    for(int i=0; i<2; i++){
        for(int j=1+i; j<3; j++){
            if(arr[i]<arr[j]){
                arr[i] = arr[j];
                arr[j] = temp;
                temp = arr[i];
            }
        }
    }

    return arr[1];
}

int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}