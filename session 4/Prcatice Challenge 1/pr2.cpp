#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter the number: ";
    cin>>num;
    if(num % 2 == 0){
        cout<<"This is an even number"<< endl;
        if(num < 100){
            cout<<"The number is less than 100"<<endl;
        }
    }
    else{
        cout<<"This is an Odd number"<<endl;
    }
}