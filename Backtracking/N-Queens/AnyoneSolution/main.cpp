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
bool isSafe(vector <vector<char>> board,int row,int col){
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
bool nQueens(vector<vector<char>> &board, int row) {
    if(row == board.size()) {
        return true;
    }
    for(int col = 0; col < board.size(); col++) {
        if(isSafe(board, row, col)) {
            board[row][col] = 'Q';
            if(nQueens(board, row + 1)) return true;
            board[row][col] = '.';
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector <vector<char>> board;
    for(int i=0;i<n;i++){
        vector <char> each;
        for(int j=0;j<n;j++){
            each.push_back('.');
        }
        board.push_back(each);
    }
   if(nQueens(board, 0)) {
        display(board);
    } else {
        cout << "No solution exists." << endl;
    }
    return 0;

}