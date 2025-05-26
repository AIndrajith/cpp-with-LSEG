// take (N-1) number of user inputs of integers from 1 to N
// Inputs are different each other, 
//develop a program to find a missing number

#include<iostream>
using namespace std;

int main(){
    int Actual_Total, num, missing_num, num_count,current_total=0;
    
    cout<<"Enter number count: ";
    cin>>num_count;

    Actual_Total =( num_count*(num_count+1))/2;

    cout<< "Enter numbers: ";
    for(int i = 1; i < num_count; i++ ){
        cin>>num;
        current_total += num;
    }
    cout<< endl;

    missing_num = Actual_Total - current_total;

    cout<< "The missing number is : "<< missing_num << endl;
}