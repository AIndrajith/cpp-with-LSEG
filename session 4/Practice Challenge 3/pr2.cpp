#include<iostream>
using namespace std;

int main(){
    int number;
    std::cout << "Enter the number you want to check: ";
    cin >> number;

    if((number >= 0)&& (number <= 15)){
        if(number == 2 || number == 3 || number == 5 || number == 7 || number == 11 ||number == 13){
            std::cout << "The Number is a prime number."<< std::endl;
        }
    }
    else{
        std::cout<<"Invalid input! Enter a number between 0 and 15."<< std::endl;
    }
}