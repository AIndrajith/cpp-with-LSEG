#include<iostream>
using namespace std;

int main(){
    int marks[10], marksPart1, marksPart2;
    cout<<"Enter marks for each question: "<<endl;

    cout<<"Question 1(0-5): ";
    cin>>marks[0];
    cout<<"Question 2(0-5): ";
    cin>>marks[1];
    cout<<"Question 3(0-5): ";
    cin>>marks[2];
    cout<<"Question 4(0-5): ";
    cin>>marks[3];
    cout<<"Question 5(0-5): ";
    cin>>marks[4];
    cout<<"Question 6(0-15): ";
    cin>>marks[5];
    cout<<"Question 7(0-15): ";
    cin>>marks[6];
    cout<<"Question 8(0-15): ";
    cin>>marks[7];
    cout<<"Question 9(0-15): ";
    cin>>marks[8];
    cout<<"Question 10(0-15): ";
    cin>>marks[9];
    
    marksPart1 = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    marksPart2 = marks[5]+marks[6]+marks[7]+marks[8]+marks[9];

    cout<<endl;
    cout<<"Marks for part 1: "<< marksPart1 <<endl;
    cout<<"Marks for part 2: "<< marksPart2 <<endl;

    if((marksPart1 + marksPart2) > 100){
        cout<<"Input data is invalid!"<<endl;
        return 0;
    }
    if((marksPart1 >= 15) && (marksPart2 >= 40)){
        cout<<"Passed!"<<endl;
    }
    else{
        cout<<"Failed!"<<endl;
    }
    return 0;

}