#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    int k;
    cin >> s;
    cin >> k;
    int L=0,R=0,Max=0;
    unordered_set<char> set;
    while(R<s.size()){
        if(set.find(s[R]) == set.end()){
            if(k>0){
                Max=max(Max,R-L+1);
                set.insert(s[R]);
                k--;
            }else{
                set.erase(s[L]);
                L++;
            }
        }else{
            Max=max(Max,R-L+1);
            R++;
        }
    }
    return Max;
}