#include <iostream>

using namespace std;

int main(){
    cout<<"Enter the Temperature in Fahrenheit: ";
    double F_temp;
    cin>>F_temp;
    double C_temp= (F_temp-32)/1.8;
    cout<<"Temperature in Celsius: "<<C_temp;
    return 0;
}