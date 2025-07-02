#include <iostream>
using namespace std;


void substring(string s,string empty){
    if(s.length()==0){
        cout << empty << " ";
        return;
    }
    substring(s.substr(1,s.length()-1),empty+s[0]); //Go till then end (recurrsion)
    substring(s.substr(1,s.length()-1),empty); //Backtrack for No case

}
int main(){
    string s;
    getline(cin,s);
    string empty="";
    substring(s,empty);

}