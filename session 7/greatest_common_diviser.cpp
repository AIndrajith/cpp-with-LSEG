#include<stdio.h>
#include<iostream>

using namespace std;

void printGCD(int a, int b){
    int max,min;
    if(a>b){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }
    while (min-- >0)
    {
        cout << "min : " << min << endl;
        if(a % min == 0 && b % min == 0){
            cout << "GCD of "<< a << " and " << b << " is : " << min << endl;
            return ;
        }
    }
    
}

int main(){
    printGCD(6, 9);
}