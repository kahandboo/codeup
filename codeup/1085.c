#include <stdio.h>

int main(){
    int h,b,c,s;
    double result;
    scanf("%d %d %d %d",&h,&b,&c,&s);
    result = ((double)h*b*c*s)/8;
    result = result/(1024*1024);
    printf("%.1f MB", result);
    return 0;
}