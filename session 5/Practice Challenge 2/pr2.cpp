// program for find the Factorial 

#include<iostream>
using namespace std;

int main(){
    int num; 
    cout << "Enter a positive integer: ";
    cin>> num;

    long long factorial = 1;

    for(int i =1; i <= num; ++i){
        factorial *= i;
    }
    
    cout << "Factorial of "<< num << " = " << factorial;
    return 0;
}