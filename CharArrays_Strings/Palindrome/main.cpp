#include <iostream>
using namespace std;

void swap(char& a,char&b){
    char temp=a;
    a=b;
    b=temp;
}
bool palindrome(char word[],int size){
    int ptr=0;
    int ptr1=size-1;
    while(ptr<ptr1){
        if(word[ptr]!=word[ptr1]){
            return false;
        }
        ptr++;
        ptr1--;
    }
    return true;
}
int main(){
    char word[50];
    cin.getline(word,50);
    if(palindrome(word,strlen(word))){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}