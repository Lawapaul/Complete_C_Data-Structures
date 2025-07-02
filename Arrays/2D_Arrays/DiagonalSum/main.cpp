#include <iostream>
using namespace std;

void DiagonalSum(int arr[][5],int n){
    int sum=0,sum_r=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        if(arr[i][i] != arr[i][5-i-1]){
            sum_r+=arr[i][5-i-1];
        }
    }
    cout << sum+sum_r;
}
int main(){
    int n;
    cin >> n;
    int arr[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }
    DiagonalSum(arr,n);
}