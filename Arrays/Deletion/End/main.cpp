#include <iostream>
using namespace std;

int main(){
    int arr[10]={22,19,18,1,2,3,4,5,6};
    int i=0,size=9;
    size--;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}