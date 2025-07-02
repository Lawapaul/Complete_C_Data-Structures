#include <iostream>
#include <cstring>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=0;
    for(char ch: s){
        if(ch=='a' || ch=='i' || ch=='e' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    cout << count;
    return 0;
}