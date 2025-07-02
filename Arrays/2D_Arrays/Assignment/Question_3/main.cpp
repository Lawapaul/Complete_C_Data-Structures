#include <iostream>
using namespace std;

void Transpose(int arr[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout << arr[j][i];
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    Transpose(arr,n);
}