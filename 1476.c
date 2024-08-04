#include <stdio.h>
#include <malloc.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *first_line;

    first_line = (int *)malloc(sizeof(int)*m);
    int k = 2;
    first_line[0]= 1; 
    for(int j=1; j<m; j++){
        first_line[j]= first_line[j-1]+k;
        if(k<n){
            k++;
        } 
    }
    
    return 0;
}