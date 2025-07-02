#include <iostream>
using namespace std;

int firstOccurrence(vector<int> array,int key,int i){
    if(i>=array.size()){
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return firstOccurrence(array,key,i+1);

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
    int i=0;
    cout << firstOccurrence(array,4,i);
    return 0;
}