#include <iostream>
using namespace std;

class Heap{
    public:
        vector<int> pq;
        void push(int num){
            pq.push_back(num);
            int parent = (pq.size()-1)/2;
            int child = pq.size()-1;
            while(parent >= 0 && pq[child] < pq[parent]){
                swap(pq[child],pq[parent]);
                child = parent;
                parent = (child-1)/2;
            }
        }
        bool empty(){
            return pq.size()==0;
        }
        int top(){
            return pq[0];
        }
        void heapify(int idx){
            if(idx >= pq.size()){
                return;
            }
            int l=2*idx + 1;
            int r=2*idx+2;
            int Min=idx;
            if(l < pq.size() && pq[l] < pq[Min]){
                Min=l;
            }
            if(r < pq.size() && pq[r] < pq[Min]){
                Min=r;
            }
            if(Min!=idx){
                swap(pq[Min],pq[idx]);
                heapify(Min);
            }
        }
        void pop(){
            swap(pq[0],pq[pq.size()-1]);
            pq.pop_back();
            heapify(0);
        }
};
int main(){
    Heap hp;
    hp.push(4);
    hp.push(2);
    hp.push(1);
    hp.push(6);
    hp.push(3);
    while(!hp.empty()){
        cout << hp.top() << " ";
        hp.pop();
    }

}