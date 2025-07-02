#include <iostream>
using namespace std;


void maxSum(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<=size;j++){
            int profit=arr[j]-arr[i];
            if(max < profit){
                max=profit;
            }
        }
    }
    cout << max;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    maxSum(arr,size);
    return 0;
}