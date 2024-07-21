#include <stdio.h>

int main(){
    int maze[10][10]={};
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            scanf("%d",&maze[i][j]);
        }
    }
    int x = 1;
    int y = 1;
    while(1){
        if(maze[x][y] == 2){ 
            maze[x][y] = 9;
            break;
        }
        maze[x][y] = 9; 
        
        
        if(y + 1 < 10 && maze[x][y + 1] != 1){
            y++;
        }
        
        else if(x + 1 < 10 && maze[x + 1][y] != 1){
            x++;
        }
        
        else{
            break;
        }
    }
    for(int j=0; j<10; j++){
        for(int k=0; k<10; k++){
            printf("%d ",maze[j][k]);
        }
        printf("\n");
    }
    return 0;
}