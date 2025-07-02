#include <iostream>
using namespace std;

int main(){
    char word[50];
    cin.getline(word,50);
    for(int i=0;i<strlen(word);i++){
        if((int)word[i] >= 97){
            word[i]=(char)(word[i]-32);
        }
    }
    cout << word;
}