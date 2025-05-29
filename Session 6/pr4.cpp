#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 1;
    while(i <= 100){
        sum = sum + i;
        i++;
    }
    cout<< "Sum is : "<< sum << endl;
}