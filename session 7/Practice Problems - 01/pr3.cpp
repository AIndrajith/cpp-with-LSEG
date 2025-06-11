// Check a user given number is EVEN or ODD using functions

#include<stdio.h>
#include<iostream>

using namespace std;

void EvenOdd(int a){
    if(a % 2 == 1){
        cout << "Odd"<< endl;       
    }else{
        cout << "Even"<< endl;
    }
}

int main(){
    int num;
    std::cout << "Enter the number : "<< std::endl;
    std::cin >> num;

    std::cout << "The number is : ";
    EvenOdd(num);
}