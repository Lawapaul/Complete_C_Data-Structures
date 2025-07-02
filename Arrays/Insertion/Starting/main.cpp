#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6};
    int size=6;
    int i=size-1;
    while(i>=0){
        arr[i+1] = arr[i];
        i--;
    }
    size++;
    arr[0]=22;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}