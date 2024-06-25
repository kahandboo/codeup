#include <stdio.h>

int main(){
    long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    printf("%ld", (a<b ? a:b)<c ? (a<b ? a:b):c);
    return 0;
}