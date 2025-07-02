#include <iostream>
using namespace std;


int StaircaseSearch(int arr[][4],int n,int m,int key){
    int row=0;
    int col=n-1;
    int start = arr[row][col];
    while(row < n && col>=0){
        if(start == key){
            return row,col;
        }
        else if(start > key){
            col--;
        }
        else if(start < key){
            row++;
        }
    }
    return -1;
    
}
int main(){
    int n,key;
    cin >> n >> key;
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    cout << StaircaseSearch(arr,n,4,key);

}