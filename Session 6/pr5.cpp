#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    
    a = a + b;
    b = a - b;
    a = a - b;

    
    cout << "After swapping A: "<< a << " B : "<< b<< endl;
    return 0;
}