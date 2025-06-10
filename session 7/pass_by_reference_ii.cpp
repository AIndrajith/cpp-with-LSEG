// passing Parameters are referenced inside the function.(Notice & operator)
// Address of Function Parameters and Function Arguments are equal.

#include<iostream>
#include<string>

using namespace std;

void passByRefernce(std::string &name, int &age){
    cout << "My name is "<< name << ". I'm "<< age << " years old."<< endl;
    cout << "Address of name : "<< &name << endl;
    cout << "Address of age : "<< &age << endl;
}

int main(){
    std::string Name = "John";
    int Age = 29;
    passByRefernce(Name, Age); // Calling function
    cout << "Address of Name: "<< &Name << endl;
    cout << "Address of Age : "<< &Age << endl;

    return 0;
}