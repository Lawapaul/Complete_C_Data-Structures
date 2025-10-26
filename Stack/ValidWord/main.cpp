#include <iostream>
using namespace std;

bool isValid(string word) {
    int digitCount = 0;
    bool vowelFlag = false;
    bool consonentFlag = false;

    for(int i = 0; i < word.size(); i++) {
        if(isdigit(word[i])) {
            digitCount++;
        } 
        else if(isalpha(word[i])) {
            char ch = tolower(word[i]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelFlag = true;
            } else {
                consonentFlag = true;
            }
        } 
        else {
            return false; 
        }
    }

    cout << digitCount << endl;

    if(digitCount < 3) return false;
    if(!vowelFlag) return false;
    if(!consonentFlag) return false;

    return true;
}

int main(){
    string word;
    getline(cin, word);
    if(isValid(word)){
        cout << "Yes";
    } else {
        cout << "No";
    }
}