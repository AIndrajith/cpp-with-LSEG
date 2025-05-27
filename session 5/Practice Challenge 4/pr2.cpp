#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number of rows: ";
    cin>> n;

    int i = 1; 
    int j;

    while(i <= n){
        j =1 ;
        while(j<= i){
            cout<< " + ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}