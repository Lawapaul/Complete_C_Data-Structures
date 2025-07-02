#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6};
    int size=6;
    int index;
    int i=size-1;
    cin >> index;
    while(i>=index){
        arr[i+1]=arr[i];
        i--;
    }
    arr[index]=69;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}