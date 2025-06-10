// Pass by reference allows a function to directly modify the original variables 
// passed to it, rather than working with copies. This method improves performance by avoiding 
// unnecessary data copying and enables functions to return multiple values through parameter 
// modification.

#include<iostream>

//function to swap two integers
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10;
    int y = 20;

    std::cout << "Before swapping: x = "<< x << ", y = "<< y << std::endl;

    // Call the swap function
    swap(x, y);

    std::cout << "Afer swapping: x = "<< x << ", y = "<< y << std::endl;

    return 0;
}