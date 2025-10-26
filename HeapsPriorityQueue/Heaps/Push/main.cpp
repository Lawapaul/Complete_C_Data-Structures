#include <iostream>
using namespace std;

class Heap{
    vector<int> heap;
    public:
        void push(int val){
            heap.push_back(val);
            int child=heap.size()-1;
            int parent=(child-1)/2;
            while(parent>=0 && heap[child]>heap[parent]){
                swap(heap[parent],heap[child]);
                child=parent;
                parent=(child-1)/2;
            }
        }
        int top(){
            return heap[0];
        }
        bool empty(){
            return heap.size()==0;
        }
};
int main(){
    Heap heap;
    heap.push(100);
    heap.push(90);
    heap.push(300);
    heap.push(180);
    cout << heap.top();
}