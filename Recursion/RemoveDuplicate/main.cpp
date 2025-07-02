//Only for lowerCase
#include <iostream>
using namespace std;


string removeDuplicate(string s,int ptr,string empty){
    if(ptr>=s.length()){
        return empty;
    }
    for(int i=0;i<ptr;i++){
        if(s[i]==s[ptr]){
            return removeDuplicate(s,ptr+1,empty);
        }
    }
    empty+=s[ptr];
    return removeDuplicate(s,ptr+1,empty);
}
string removeDuplicate_2(string s,int ptr,string empty,bool arr[26]){
    if(ptr>=s.length()){
        return empty;
    }
    if(arr[(int)s[ptr]-'a']== false){
        arr[(int)s[ptr] -'a'] = true;
        empty+=s[ptr];
    }
    return removeDuplicate_2(s,ptr+1,empty,arr); 
}
int main(){
    string s;
    cin >> s;
    string empty="";
    int ptr=0;
    bool arr[26];
    for(int i=0;i<26;i++){
        arr[i]=false;
    }
    cout << removeDuplicate_2(s,ptr,empty,arr);
    return 0;
}
