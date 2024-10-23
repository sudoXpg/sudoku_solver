#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define GRID_SIZE 9

int checkInRowCol(int puzzle[GRID_SIZE][GRID_SIZE],int i, int j,int num){
    for(int r=0;r<GRID_SIZE;r++){
        if(puzzle[i][r]==num && r!=j){
            return 1;
        }
        if(puzzle[r][j]==num && r!=i){
            return 1;
        }
    }
    return 0;
}

int checkInBox(int puzzle[GRID_SIZE][GRID_SIZE],int i, int j, int num){
    int rowIndex=i-(i%3);
    int colIndex=j-(j%3);
    for(int s=rowIndex;s<rowIndex+3;s++){
        for(int t=colIndex;t<colIndex+3;t++){
            if(puzzle[s][t]==num && (s!=i && t!=j)){
                return 1;
            }
        }
    }
    return 0;
}

int checkFxn(int puzzle[GRID_SIZE][GRID_SIZE],int i,int j,int num){
    if(checkInRowCol(puzzle,i,j,num)==1) return 1;
    if(checkInBox(puzzle,i,j,num)==1) return 1;

    return 0;
}


int solveBoard(int puzzle[GRID_SIZE][GRID_SIZE]){
    for(int i=0;i<GRID_SIZE;i++){
        for(int j=0;j<GRID_SIZE;j++){
            if(puzzle[i][j]==0){
                for(int trial=1;trial<=GRID_SIZE;trial++){
                    if(checkFxn(puzzle,i,j,trial)==0){
                        puzzle[i][j]=trial;
                        if(solveBoard(puzzle)==1){
                            return 1;
                        }
                        else{
                            puzzle[i][j]=0;
                        }
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

void printBoard(int puzzle[GRID_SIZE][GRID_SIZE]){
    for (int i = 0; i < GRID_SIZE; i++) {
            if (i % 3 == 0 && i != 0) {
                printf("- - - - - - - - - - -\n");
            }
            for (int j = 0; j < GRID_SIZE; j++) {
                if (j % 3 == 0 && j != 0) {
                    printf("| ");
                }
                printf("%d ", puzzle[i][j]);
            }
            printf("\n");
        }
}