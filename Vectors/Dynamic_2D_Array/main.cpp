#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int** matrix=new int*[r];
    for(int i=0;i<r;i++){
        matrix[i]=new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
}