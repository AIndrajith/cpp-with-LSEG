// Pass first name and last name as function arguments and
// print full name

#include<iostream>
#include<stdio.h>

using namespace std;

void fullname(string f_name, string l_name){
    cout <<"Full name: "<< f_name << " " << l_name << endl ;
}

int main(){
    string firstName, lastName;
    std::cout << "Enter first name: "<< std::endl;
    std::cin>> firstName;

    std::cout << "Enter Last name : "<< std::endl;
    std::cin>> lastName;

    fullname(firstName, lastName);
}