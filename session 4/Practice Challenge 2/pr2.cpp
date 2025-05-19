#include<iostream>
using namespace std;

int main(){
    string pwd;
    cout<<"Enter the password: ";
    cin>>pwd;

    if(pwd == "PASSWORD"){
        cout<<"Correct password! You can enter the room.";
    }
    else{
        cout<<"Invalid password! Please enter the correct password!";
    }
    return 0;
}