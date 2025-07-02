#include <iostream>
using namespace std;


void display(int sudoku[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}
bool isSafe(int sudoku[9][9],int row,int col,int digit){
    for(int i=0;i<9;i++){
        if(sudoku[i][col]==digit){
            return false;
        }
    }
    for(int i=0;i<9;i++){
        if(sudoku[row][i]==digit){
            return false;
        }
    }
    int startRow = (row/3)*3;
    int startCol = (col/3)*3;
    for(int i=startRow;i<=startRow+2;i++){
        for(int j=startCol;j<=startCol+2;j++){
            if(sudoku[i][j]==digit){
                return false;
            }
        }
    }
    return true;
}
bool sudokuSolver(int sudoku[9][9],int row,int col){
    if(row==9){
        display(sudoku);
        return true;
    }
    int nextrow=row;
    int nextcol=col+1;
    if(col==8){
        nextrow++;
        nextcol=0;
    }
    if(sudoku[row][col]!=0){
        return sudokuSolver(sudoku,nextrow,nextcol);
    }
    for(int i=1;i<=9;i++){
        if(isSafe(sudoku,row,col,i)){
            sudoku[row][col]=i;
            if(sudokuSolver(sudoku,nextrow,nextcol)){
                return true;
            }
            sudoku[row][col]= 0;
        }
    }
    return false;
}
int main(){
    int sudoku[9][9] = {{0,0,8,0,0,0,0,0,0},
                        {4,9,0,1,5,7,0,0,2},
                        {0,0,3,0,0,4,1,9,0},
                        {1,8,5,0,6,0,0,2,0},
                        {0,0,0,0,2,0,0,6,0},
                        {9,6,0,4,0,5,3,0,0},
                        {0,3,0,0,7,2,0,0,4},
                        {0,4,9,0,3,0,0,5,7},
                        {8,2,7,0,0,9,0,1,3},
                        };
     if(!sudokuSolver(sudoku, 0, 0)) {
        cout << "No solution exists!" << endl;
    }
    return 0;
    }
