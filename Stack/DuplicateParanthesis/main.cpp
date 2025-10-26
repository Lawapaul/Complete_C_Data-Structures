#include <iostream>
#include <stack>
using namespace std;

bool duplicateParanthesis(string s){
    stack<char>t;
    for(int i=0;i<s.size();i++){
        if(s[i]==')'){
            if(t.top()=='(' ){
                return true;
            }
            while(t.top()!='('){
                t.pop();
            }
            t.pop();
        }
        else{
            t.push(s[i]);
        }
    }
    return false;
}
int main(){
    string s;
    getline(cin,s);
    if(duplicateParanthesis(s)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;

}