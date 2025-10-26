#include <iostream>
using namespace std;

int main(){
    string text;
    cin >> text;
    string pattern;
    cin >> pattern;
    for(int i=0;i<=text.size()-pattern.size();i++){
        int j;
        for(j=0;j<pattern.size();j++){
            if(text[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==pattern.size()){
            cout << "Found at Index: " << i << "to " << (i+pattern.size()-1) << endl;
        }
    }
    return 0;
}