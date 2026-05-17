#include <iostream>
#include <vector>
using namespace std;

class SegmentTrees{
    int n;
    vector<int> tree;
    public:
    SegmentTrees(vector<int>& arr){
        n=arr.size();
        tree.resize(n*4);
    }
    void build(vector<int>& arr,int s,int e,int Node){
        if(s==e){
            tree[Node] = arr[s];
            return;
        }
        int mid = s + (e-s)/2;
        build(arr,s,mid,2*Node+1);
        build(arr,mid+1,e,2*Node+2);
        tree[Node] = tree[2*Node+1] + tree[2*Node+2];
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    SegmentTrees obj(arr);
    obj.build(arr,0,n-1,0);
    return 0;
}
