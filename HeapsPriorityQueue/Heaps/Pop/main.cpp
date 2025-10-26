#include <iostream>
using namespace std;

class Heap{
    vector<int> heap;
    void heapify(int idx){
        if(idx>=heap.size()){
            return;
        }
        int left = 2*idx+1;
        int right=2*idx+2;
        int maxIdx=idx;
        if(left < heap.size() && heap[maxIdx] < heap[left]){
            maxIdx=left;
        }
        if(right < heap.size() && heap[maxIdx] < heap[right]){
            maxIdx=right;
        }
        if(idx!=maxIdx){
            swap(heap[idx],heap[maxIdx]);
            heapify(maxIdx);
        }
    }
    public:
        void push(int val){
            heap.push_back(val);
            int child=heap.size()-1;
            int parent=(child-1)/2;
            while(parent>=0 && heap[child] > heap[parent]){
                swap(heap[child],heap[parent]);
                child=parent;
                parent=(child-1)/2;
            }
        }
        void pop(){
            if(heap.size()==0){
                return;
            }
            swap(heap[0],heap[heap.size()-1]); //swap with last element
            heap.pop_back(); //remove last element;
            heapify(0); // heapify of root->0
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
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);
    while(!heap.empty()){
        cout << "top = " << heap.top() << endl;
        heap.pop();
    }
}