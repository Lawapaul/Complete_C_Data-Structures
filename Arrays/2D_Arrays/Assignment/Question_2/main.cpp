#include <iostream>
using namespace std;


int sum(int arr[][3],int n){
    int sum=0;
    for(int j=0;j<3;j++){
        sum+=arr[1][j];
    }
    return sum;
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
    cout << sum(arr,n);
}