// print this star pattern
//  *  *  *  * 
//     *  *  * 
//        *  * 
//           *

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i<4; i++){
        for(int k = 0; k<i;k++){
            cout<<"   ";
        }
        for(int j= 4-i; j>0; j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    // int n=4;
    // for(int i = 0; i< n; i++){
    //     for(int j = 0; j<n-i; j++){
    //         cout<< "*\t";
    //     }
    //     cout<<"\n";
    // }
}