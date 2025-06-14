// Develop a calculator using functions
// Calculator should be able to divide , add, substract and multiply
// Above operations should be performed on 3 user inputs

#include<iostream>
#include<stdio.h>

using namespace std;

void calculate(float a, float b, char c){
    if(c=='+'){
        std::cout << a << " + " << b << " = " << a+b<< endl;
    }
    else if(c=='-'){
        std::cout << a << " - " << b << " = " << a-b<< endl;
    }
    else if(c=='*'){
        std::cout << a << " * " << b << " = " << a*b<< endl;
    }
    else if (c == '/') {
        if (a == 0 || b == 0) {
            std::cout << "Error: Division by zero!" << endl;
        } else {
            std::cout << a << " / " << b << " = " << a / b << endl;
        }
    }
    else{
        std::cout << "You entered a wrong operator!"<< endl;
    }
}

int main(){
    float num1, num2;
    char op , res= 'y';

    do{
        std::cout << "Enter first number : ";
        std::cin >> num1;

        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> op;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        calculate(num1, num2, op);

        std::cout << "Do you want to perform another operation: ";
        std::cin >> res;
    } while (res == 'y');

    return 0;
}