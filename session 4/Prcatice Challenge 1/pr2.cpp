#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter the number: " << endl;
    cin>>num;
    if(num%2==0 && num < 100){
        cout<<"The number is even and less than 100";
    }
}