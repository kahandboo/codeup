#include <stdio.h>


int main(){
    int n,a[100],b[100];
    scanf("%d",&n);
    for(int i=1;  i<n+1; i++){
        scanf("%d %d",&a[i],&b[i]);
    }



    for(int i=1; i<n; i++){
        for(int j=1+i; j<n+1; j++){
            if(a[i]>a[j]){
                int temp_a = a[i];
                int temp_b = b[i];
                b[i] = b[j];
                b[j] = temp_b;
                a[i] = a[j];
                a[j] = temp_a;
            }
        }
    }

    for(int i=1; i<n+1; i++){
        printf("%d %d",a[i],b[i]);
        printf("\n");
    }
}