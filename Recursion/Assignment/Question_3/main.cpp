#include <iostream>
using namespace std;

int count(string s,int idx,int Count){
    if(idx == s.length()){  
        return Count;
    }
    int set=0;
    for(int i=idx;i<s.length();i++){
        if(s[idx] == s[i]){
            set++;
        }
    }
    return count(s,idx+1,Count+set);
}

int main(){
    string s;
    cin >> s;
    cout << count(s,0,0);
}