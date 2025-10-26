#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;


int main(){
    vector<pair<string,string>> travel;
    unordered_set<string> set;
    unordered_map<string,string> map;
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        string s1,s2;
        cout << "Enter From ";
        cin >> s1;
        cout << "Enter To ";
        cin >> s2;
        travel.push_back(make_pair(s1,s2));
        map[s1] = s2;
        set.insert(s2);
    }
    string start;
    for(int i=0;i<travel.size();i++){
        if(set.find(travel[i].first)==set.end()){
            start=travel[i].first;
        }
    }
    cout << "Travel Plan" << endl;
    cout << start << "->";
    while(map.count(start)){
        cout << map[start] << "->";
        start=map[start];
    }

}