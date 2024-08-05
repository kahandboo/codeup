#include <stdio.h>

int a, n;

long long int pow(long long int a, long long int n){
    long long int result = 1;
    long long int base = a;

    while(n>0){
        if (n % 2 == 1) {
            result *= base;
        }
        base *= base;
        n /= 2;
    }
    return result;
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}