#include <iostream>
using namespace std;

bool isSafe(vector<vector<int>> &maze, int row, int col) {
    int n = maze.size(), m = maze[0].size();
    if (row >= 0 && row < n && col >= 0 && col < m && maze[row][col] == 1) {
        return true;
    }
    return false;
}
void ratWays(vector<vector<int>> maze,int row,int col,string empty){
    if(row==maze.size()-1 && col==maze.size()-1){
        cout << empty << endl;
        return;
    }
    if(isSafe(maze,row,col)){
        maze[row][col]=0;
        ratWays(maze,row,col+1,empty + 'R'); //right
        ratWays(maze,row+1,col,empty + 'D'); //down
        ratWays(maze,row,col-1,empty + 'L'); //left
        ratWays(maze,row-1,col,empty + 'U'); //up
        maze[row][col]=1;
    }

}
int main(){
    vector <vector<int>> maze;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        vector <int> each;
        for(int j=0;j<m;j++){
            int value;
            cin >> value;
            each.push_back(value);
        }
        maze.push_back(each);
    }
    string empty="";
    ratWays(maze,0,0,empty);
    return 0;
}