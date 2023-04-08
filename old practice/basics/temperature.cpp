#include<iostream>
#include<string>
using namespace std;
main(){

float celcius,fahrenheit;

cout<<"Enter the temperature in fahrenheit: ";

cin>>fahrenheit;

celcius=(0.56)*(fahrenheit-32);
//cout.precision(1);
cout<<"\n\nTemperature in celcius is "<<celcius;

}
