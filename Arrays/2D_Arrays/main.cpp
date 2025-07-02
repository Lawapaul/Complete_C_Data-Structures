#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin >> arr[i][j];
        }
    }
     int s_row=0;
    int s_col=0;
    int e_row=size-1;
    int e_col=size-1;
    while(s_row <= e_row && s_col <=e_col){
        //top
        for(int i=s_col;i<=e_col;i++){
            cout << arr[s_row][i] << " ";
        }
        //right
        for(int i=s_row+1;i<=e_row;i++){
            cout << arr[i][e_col] << " ";
        }
        for(int i=e_col-1;i>=s_col;i--){
            if(s_col==e_col){
                break;
            }
            cout << arr[e_row][i];
        }
        for(int i=e_row;i>=s_row+1;i--){
            if(s_row==e_row){
                break;;
            }
            cout << arr[i][s_col];
        }
        s_row++;
        s_col++;
        e_row--;
        e_col--;


    }
}