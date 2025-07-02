#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int copyArray[size];
    for(int i=0;i<size;i++){
        copyArray[i] = arr[size-i-1];
    }
    for(int i=0;i<size;i++){
        arr[i]=copyArray[i];
    }
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Before: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    reverse(arr,size);
    cout << "After: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}