// Calculate the maximum of given two integers using functions

#include<stdio.h>
#include<iostream>

using namespace std;

int minMax(int a, int b){
    if(a > b){
        return a;       
    }else{
        return b;
    }
}

int main(){
    int A, B;
    std::cout << "Enter the first number : "<< std::endl;
    std::cin >> A;

    std::cout << "Enter the second number : "<< std::endl;
    std::cin >> B;

    int Max = minMax(A, B);
    std::cout << "Maximum: "<< Max << endl;
}