#include<iostream>
using namespace std;

int main(){
    int stdNo;
    cout<< "Enter student registration number: ";
    cin>> stdNo;
    if(stdNo<125684){
        cout<< "Student should sit the Hall 001";
    }
    else{
        cout<< "Student should sit the Hall 002";
    }
}