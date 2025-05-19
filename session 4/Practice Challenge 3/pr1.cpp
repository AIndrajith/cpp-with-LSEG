#include<iostream>
using namespace std;

int main(){
    int studIndex;
    cout<<"Enter the index number of student: ";
    cin>>studIndex;

    if(studIndex % 4 == 0){
        cout<<"Group A"<<endl;
    }
    else if (studIndex % 4 == 1){
        cout<<"Group B"<<endl;
    }
    else if (studIndex % 4 == 2){
        cout<<"Group C"<<endl;
    }
    else if (studIndex % 4 == 3){
        cout<<"Group D"<<endl;
    }
    else{
        cout<<"Invalid input!"<<endl;
    }
    return 0;
}    