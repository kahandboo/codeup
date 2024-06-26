#include <stdio.h>

int main(){
    long a;
    scanf("%ld",&a);
    if(a>0){
        printf("plus\n");
    }
    else printf("minus\n");
    if (a%2 == 0){
        printf("even\n");
    }
    else printf("odd\n");

    return 0;
}
