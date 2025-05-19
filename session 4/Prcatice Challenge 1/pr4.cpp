#include<iostream>
using namespace std;

int main(){
    char character;
    cout<< "Enter user input: ";
    cin>>character;

    if((character >= 65) && (character <= 122)){
        cout<<"You entered a character."<< endl;;
    }
    else{
        cout<<"This is not a character."<<endl;
    }
    return 0;
}