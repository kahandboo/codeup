#include <stdio.h>

int n, d[110];
int f(){
    int temp = d[0];
    int biggest;
    for(int i=1; i<n; i++){
        if(temp<d[i]){
            temp=d[i];
            biggest = i;
        }
    }
    return biggest+1;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}