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
void nQueens(vector<vector<char>> &board,int row){
    if(row==2){
        display(board);
        return;
    }
    for(int col=0;col<2;col++){
        board[row][col]='Q';
        nQueens(board,row+1);   //Till case '1' - Everything Yes
        board[row][col]='.';
    }
}
int main(){
    //2x2 Board - Initialized with '.'
    vector<vector<char>> board;
    for(int i=0;i<2;i++){
        vector <char> each;
        for(int j=0;j<2;j++){
            each.push_back('.');
        }
        board.push_back(each);
    }
    nQueens(board,0);
}