#include <iostream>
using namespace std;

void displaySubarray(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout << arr[k];
            }
            cout << ",";
        }
        cout << endl;
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    displaySubarray(arr,size);
}