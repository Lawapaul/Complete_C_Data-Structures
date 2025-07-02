#include <iostream>
using namespace std;

void swap(char& a,char&b){
    char temp=a;
    a=b;
    b=temp;
}
void reverse(char word[],int size){
    int ptr=0;
    int ptr1=size-1;
    while(ptr<ptr1){
        swap(word[ptr],word[ptr1]);
        ptr++;
        ptr1--;
    }
}
int main(){
    char word[50];
    cin.getline(word,50);
    reverse(word,strlen(word));
    cout << word;
}