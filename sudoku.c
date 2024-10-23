#include "defs.h"
int main(){

    clock_t start = clock();
    int puzzle[GRID_SIZE][GRID_SIZE];
    
    FILE *fp=fopen("sudoku.txt","r");
    if(fp==NULL){
        printf("file opening error !\n");
        return 1;
    }

    char line[256];
    for(int i=0;i<GRID_SIZE;i++){
        if(fgets(line,sizeof(line),fp)!=NULL){
            char *token=strtok(line,",");
            for(int j=0;j<GRID_SIZE;j++){
                if(token!=NULL){
                    puzzle[i][j]=atoi(token);
                    token=strtok(NULL,",");     // continue tokenising the same string
                }
            }
        }
    }
    fclose(fp);


    if (solveBoard(puzzle)) {
        clock_t end=clock();
        double elapsed_time_ms = ((double)(end - start) * 1000) / CLOCKS_PER_SEC;
        printf("Solved Sudoku Puzzle in %fms\n\n",elapsed_time_ms);
        printBoard(puzzle);
    }
    else{
        printf("No solution exists!\n");
    }
   return 0;
   }