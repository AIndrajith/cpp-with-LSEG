// write two seperate progrma segments
// print this pattern using while loop and for loop
// #    .   .   #
// #            #
// #            #
// #            #
// #            #
// #            #
// #    .   .   #

#include<iostream>
using namespace std;

int main(){
    int i = 0;

    while(i < 7){
        if( i == 0 || i == 6){
            std::cout<< "#\t*\t*\t#\n";
        }else{
            std::cout<< "#\t\t\t#\n";
        }
        i++;
    }
}