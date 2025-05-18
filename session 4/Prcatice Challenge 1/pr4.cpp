#include<iostream>
using namespace std;

int main(){
    int marks1, marks2;
    cout<<"Enter part 1 marks: "<< endl;
    cin>> marks1;
    cout<<"Enter part 2 marks: "<<endl;
    cin>>marks2;
    if(marks1>15 && marks2>40){
        cout<<"Student pass the exam"<< endl;
    }
}