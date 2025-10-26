#include <iostream>
using namespace std;

template <class T>
class Queue{
    public:
    T* arr;
    int f,r,size,currentSize;
    Queue(int size){
        this->size=size;
        arr=new T[size];
        f=0;
        r=-1;
        currentSize=0;
    }
    void push(T val){
        if(size==currentSize){
            cout << "Queue is Full";
            return;
        }
        r = (r+1)%size;
        arr[r]=val;
        currentSize++;
    }
    void pop(){
        if(currentSize==0){
            cout << "Empty Queue";
            return;
        }
        f = (f+1)%size;
        currentSize--;
    }
    T front(){
        return arr[f];
    }
    bool empty(){
        return currentSize==0;
    }
};
int main(){
    Queue<int> q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout << q.front();
        q.pop();
    }
    return 0;
}