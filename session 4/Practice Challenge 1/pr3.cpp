#include<iostream>
using namespace std;

int main(){
    char character;
    cout<<"Enter character 'y' or 'Y': ";
    cin>> character;

    if (character == 'y'){
        cout<<"user enters 'y' ";
    }
    else if (character == 'Y'){
        cout<< "user enters 'Y'";
    }
    return 0;
}