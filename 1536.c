#include <stdio.h>

int n;

long long int d[110];

long long int f(){
    long long int temp = d[1];
    for(int i=2; i<=n; i++){
        if(temp>=d[i]){
            temp=d[i];
        }
    }
    return temp;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}