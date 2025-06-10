// Pass by value creates a copy of the actual parameter's value and passes it to the function, 
// This means the funntion works with the copy, 
// and any modufications made to the parameter inside the function do not affect the original variable. 
// This method ensures That the original data remains unchanged

#include<iostream>
#include<stdio.h>

using namespace std;

// Function to double the value of an integer
void doubleValue(int a){
    a = a * 2;
}

int main(){
    int x = 10;

    std::cout << "Before calling doubelValue: x = " << x << std::endl;

    // call the doubleValue function
    doubleValue(x);

    std::cout << "After calling doubleValue: x = "<< x << std::endl;

    return 0;
}