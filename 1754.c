#include <stdio.h>

int main(){
    char num1[100];
    char num2[100];
    int j=0;
    int num1_size=0;
    int num2_size=0;
    scanf("%s %s",num1,num2);
    while(num1[j]!='\0'&&num1[j]!='\n'){
        num1_size++;
        j++;
    }
    j=0;
    while(num2[j]!='\0'&&num2[j]!='\n'){
        num2_size++;
        j++;
    }
    if(num1_size==num2_size){
        for(int i=0; i<100; i++){
            if(num1[i]>num2[i]){
                printf("%s %s",num2,num1);
                break;
            }
            else if(num1[i]<num2[i]){
                printf("%s %s",num1,num2);
                break;
            }
        }
    }
    else if(num1_size<num2_size){
        printf("%s %s",num1,num2);
    }
    else{
        printf("%s %s",num2,num1);
    }
    return 0;
}