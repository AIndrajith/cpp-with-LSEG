// Write a function to calculate the power of a number

#include<iostream>
#include<stdio.h>

using namespace std;

void Power(int a){
    
    cout << "Power is : " << a*a << endl;
}

int main(){
    int num ;
    std::cout << "Enter the number : "<< std::endl;
    std::cin >> num;

    Power(num);
}