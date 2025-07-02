#include <iostream>
#include <cstring>
using namespace std;


bool check(string s,string t){
    if(s.length() !=t.length()){
        return false;
    }
    int ptr=0;
    int ptr1=s.length()-1;
    int i=0;
    while(true){
        char curr=s[ptr];
        while(ptr1>=0){
            t[ptr1]=curr;
            if(t==s){
                return true;
            }
            ptr1--;
        }
         
    }
}
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    if(check(s,t)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}