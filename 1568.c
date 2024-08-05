#include <stdio.h>

int n, a, b, d[1010];

int maxi(a,b){
    int xixi[1010];
    for(int i=a; i<=b; i++){
        xixi[i] = d[i];
    }
    int temp = d[a];
    for(int i=a; i<b; i++){
        for(int j=1+i; j<b+1; j++){
            if(d[i]<d[j]){
                d[i] = d[j];
                d[j] = temp;
                temp = d[i];
            }
        }
    }
    for(int i=a; i<=b; i++){
        if(d[a]==xixi[i]){return i;}
    }

}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}