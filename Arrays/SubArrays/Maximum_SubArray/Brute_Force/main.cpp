#include <iostream>
using namespace std;


void maxSum_SubArray(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
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
    maxSum_SubArray(arr,size);
    return 0;
}