// program to print a Fahrenheit to Celsius table from -20F 
// to 100F with a 10F interval

#include<iostream>
using namespace std;

int main(){
    float temperature_celsius, temperature_fahrenheit;
    cout<< "Fahrenheit to Celsius"<< endl;
    
    for(temperature_fahrenheit = -20; temperature_fahrenheit <= 100 ;){
        temperature_celsius = (5.0/9.0)*(temperature_fahrenheit-32);
        cout<< "Temp "<< temperature_fahrenheit<< " F = " << temperature_celsius <<" C"<< endl;
        temperature_fahrenheit += 10; 
    }
        
    return 0;
}