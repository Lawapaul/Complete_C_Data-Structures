#include <iostream>
using namespace std;


void maxSum(int arr[],int size){
    int max = INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(max<sum){
            max=sum;
        }
        if(sum<0){
            sum=0;
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