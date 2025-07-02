#include <iostream>
using namespace std;


void maxSum(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum > max){
                max=sum;
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