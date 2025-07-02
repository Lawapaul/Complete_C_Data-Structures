#include <iostream>
using namespace std;


void SpiralMatrix(int arr[][4],int n,int m){
    int s_row=0;
    int e_row=n-1;
    int s_col=0;
    int e_col=m-1;
    while(s_row <=e_row && s_col <= e_col){
        for(int i=s_col;i<=e_col;i++){
            cout << arr[s_row][i] << " ";
        }
        for(int i=s_row+1;i<=e_row;i++){
            cout << arr[i][e_col] << " ";
        }
        for(int i=e_col-1;i>=s_col;i--){
            if(s_row == e_row){
                break;
            }
            cout << arr[e_row][i] << " ";
        }
        for(int i=e_row-1;i>=s_row+1;i--){
            if(s_col==e_col){
                break;
            }
            cout << arr[i][s_col] << " ";

        }
        s_col++;
        s_row++;
        e_row--;
        e_col--;
    }
}
int main(){
    int n;
    cin >> n ;
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    SpiralMatrix(arr,n,4);

}