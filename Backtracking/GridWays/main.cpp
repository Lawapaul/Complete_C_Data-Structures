#include <iostream>
using namespace std;

int gridWays(int n,int m,int row,int col){
    if(row==n && col ==m){
        return 1;
    }
    if(row >= n || col >= m) return 1;     
    int val1=gridWays(n,m,row+1,col);
    int val2=gridWays(n,m,row,col+1);
    return val1 + val2;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << gridWays(n-1,m-1,0,0);
}