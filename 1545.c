#include <stdio.h>

int n;
#include <stdbool.h>

bool zero(int n){
    return !n;
}

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}