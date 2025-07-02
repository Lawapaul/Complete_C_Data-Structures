#include <iostream>
using namespace std;

void contiguous(string s,int ptr,int count){
    if(ptr>=s.length()){
        cout << count;
        return;
    }
    for(int i=ptr;i<s.length();i++){
        string empty="";
        for(int k=ptr;k<=i;k++){
            empty+=s[k];
        }
        if(empty.length()==0 || empty[0]==empty[empty.length()-1]){
            count++;
        }
    }
    contiguous(s,ptr+1,count);
}   

int main(){
    string s;
    cin >> s;
    int ptr=0;
    int count=0;
    contiguous(s,ptr,count);
    return 0;
}