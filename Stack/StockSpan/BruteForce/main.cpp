#include <iostream>
using namespace std;
#include <vector>

template <class T>
class Stack{
    public:
    vector <T> stack;
    bool isEmpty(){
        return (stack.size()==0) ? true: false;
    }
    void push(T Val){
        stack.push_back(Val);
    }
    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty";
            return;
        }
        stack.pop_back();
    }
    T top(){
        return stack[stack.size()-1];
    }
    int popPush(T current,int count){
        if(isEmpty() || top() > current ){
            return count;
        }
        T temp=top();
        pop();
        int result=popPush(current,count+1);
        push(temp);
        return result;
    }
};
void StockSpan(Stack <int>&s){
    vector <int> array;
    while(!s.isEmpty()){
        array.push_back(s.popPush(s.top(),0));
        s.pop();
    }
    cout << endl;
    for(int i=array.size()-1;i>=0;i--){
        cout << array[i] << " ";
    }
}
int main(){
    Stack <int>s;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int data;
        cin >> data;
        s.push(data);
    }
    StockSpan(s);
    return 0;

}