#include <stdio.h>

int main(){
    long a,b;
    scanf("%ld %ld",&a,&b);
    printf("%d", a>b ? a:b);
    return 0;
}
