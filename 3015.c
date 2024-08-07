#include <stdio.h>
#include <string.h>

struct Grade{
    int score;
    char name[10];
};

void sort(struct Grade grade[],int n){
    for(int i=0; i<n; i++){
        for(int j=1+i; j<n+1; j++){
            if(grade[i].score < grade[j].score){
                int temp_score = grade[i].score;
                grade[i].score = grade[j].score;
                grade[j].score = temp_score;

                char temp_name[10];
                strcpy(temp_name, grade[i].name);
                strcpy(grade[i].name, grade[j].name);
                strcpy(grade[j].name, temp_name);
            }
                else if (grade[i].score == grade[j].score) {
                if (strcmp(grade[i].name, grade[j].name) > 0) {
                    char temp_name[10];
                    strcpy(temp_name, grade[i].name);
                    strcpy(grade[i].name, grade[j].name);
                    strcpy(grade[j].name, temp_name);
            }
        }
    }    
}

int main(){
    struct Grade grade[100];
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%s %d",&grade[i].name,&grade[i].score);
    }
    sort(grade,n);
    for(int i=0; i<m; i++){
        printf("%s\n",grade[i].name);
    }
    return 0;
}