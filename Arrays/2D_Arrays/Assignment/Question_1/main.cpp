#include <iostream>
using namespace std;


int count(int arr[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==7){
                sum++;
            }
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    cout << count(arr,n);
}