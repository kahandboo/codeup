#include <stdio.h>

void string_copy(char *dest, const char *src);
int main(){
    int n;
    char name[50][50]={};
    int score[50]={};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s %d",&name[i],&score[i]);
    }
    int temp_score = score[0];
    char temp_name[50];
    for(int j=0; j<n-1; j++){
        for(int k=0; k<n-j-1; k++){
            if(score[k] < score[k+1]){
                temp_score=score[k];
                score[k]=score[k-1];
                score[k-1]=temp_score;

                string_copy(temp_name,name[k]);
                string_copy(name[k],name[k+1]);
                string_copy(name[k+1],temp_name);
            }
        }
    }
    printf("%s",name[2]);
    return 0;
}

void string_copy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';  
}