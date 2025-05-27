#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number of rows: ";
    cin>> n;

    int i = 1;
    do{
        int j = 1;
        do{
            cout << " + ";
            j++;
        }while(j<= i);

        cout << "\n";
        i++;
    }while(i<= n);
    return 0;
    
}