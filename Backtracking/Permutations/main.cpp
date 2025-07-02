#include <iostream>
using namespace std;

void permutations(string s,string empty){
    if(s.length()==0){
        cout << empty << " ";
        return;
    }
    for(int i=0;i<s.length();i++){
        char cur=s[i];
        string deleted=s.substr(0,i) + s.substr(i+1,s.length()-i-1);
        permutations(deleted,empty+s[i]);

    }
}
int main(){
    string s;
    string empty="";
    getline(cin,s);
    permutations(s,empty);
}