#include <iostream>
using namespace std;

int lastOccurrence(vector<int> array,int key,int i){
    if(i==0){
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return lastOccurrence(array,key,i-1);

}
int main(){
    vector<int> array;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int num;
        cin >> num;
        array.push_back(num);
    }
    int i=size-1;
    cout << lastOccurrence(array,3,i);
    return 0;
}