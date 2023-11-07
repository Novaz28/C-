#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout<<"Enter the radius = ";
    double radius;
    cin>>radius;
    double area= M_PI * pow(radius,2);
    cout<<"Area = "<<area;
    return 0;
}