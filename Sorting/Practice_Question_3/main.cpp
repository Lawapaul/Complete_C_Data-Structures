
// You are developing a student grading system for a school. As part of the system, you need to 
    // implement a feature that sorts the student names in alphabetical order based on their names. 
// This feature will allow teachers and administrators to easily organize and manage student records based on their names. 

// Write a program that prompts the user to enter the number of students and their respective names.
//  The program should then use the selection sort algorithm to sort the student names in alphabetical 
//  order. After each iteration of the selection sort, the program should display the updated student 
//  names to reflect the current state of the sorting process.

#include <iostream>
using namespace std;

void swap(string* a,string* b){
    string temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(vector <string>& result){
    for(int i=0;i<result.size();i++){
        int currIdx=i;
        int j=i+1;
        while(j < result.size()){
            if(result[currIdx] > result[j]){
                currIdx=j;
            }
            j++;
        }
        cout << "\nAfter " << i+1 << " iteration: ";
        for(int i=0;i<result.size();i++){
            cout << result[i] << " ";
        }
        swap(&result[currIdx],&result[i]);
    }
}
int main(){
    vector <string> result;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string name;
        cin >> name;
        result.push_back(name);
    }
    selectionSort(result);
    return 0;

}