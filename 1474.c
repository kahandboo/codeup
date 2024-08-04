#include <stdio.h>
#include <malloc.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *first_line;

    first_line = (int *)malloc(sizeof(int)*m);

    for(int j=m; j>0; j--){
            if(j%2==0){
                first_line[m-j]=n*(j-1)+1;
            }
            else{
                first_line[m-j]=n*j;
            }
        }
    int l=0;
    for(int i=n; i>0; i--){
            if(m%2!=0){
                for(int k=0; k<m; k++){
                    if(k%2!=0){
                        printf("%d ",first_line[k]+l);
                    }
                    else{
                        printf("%d ",first_line[k]-l);
                    }
                }
                l++;
                printf("\n");                
            }
            else{
                for(int k=0; k<m; k++){
                    if(k%2==0){
                        printf("%d ",first_line[k]+l);
                    }
                    else{
                        printf("%d ",first_line[k]-l);
                    }
                }
                l++;
                printf("\n");                
            }        

    }
    return 0;
}