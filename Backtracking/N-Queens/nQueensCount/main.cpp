#include <iostream>
using namespace std;

void display(vector<vector<char>> &board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------" << endl;
}
bool isSafe(vector<vector<char>> &board,int row,int col){
    //horizontal
    for(int j=0;j<board[0].size();j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    //verticle
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //leftDiagonal
   for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    }
    //rightDiagonal
    for(int i=row-1,j=col+1 ; i>=0 && j<board[0].size();i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}
int nQueens(vector<vector<char>> &board,int row){
    if(row==4){
        display(board);
        return 1;
    }
    int count=0;
    for(int col=0;col<4;col++){
        if(isSafe(board,row,col)){
             board[row][col]='Q';
             count+=nQueens(board,row+1);   //Till case '1' - Everything Yes
             board[row][col]='.';
        }
    }
    return count;
}
int main(){
    //2x2 Board - Initialized with '.'
    vector<vector<char>> board;
    for(int i=0;i<4;i++){
        vector <char> each;
        for(int j=0;j<4;j++){
            each.push_back('.');
        }
        board.push_back(each);
    }
    cout << nQueens(board,0);
}