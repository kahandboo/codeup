#include <stdio.h>

int main(){
    long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    if (a%2 == 0){
        printf("%ld\n",a);
    }
    if (b%2 == 0){
        printf("%ld\n",b);
    }
    if (c%2 == 0){
        printf("%ld",c);
    }
    return 0;
}