#include <iostream>

int main(){
    int x=10;
    int y=3;
    int a= x++;  // x=11, a=10
    int b= ++x;  // x=11, b=12
    // there only exist x++,++x and x--,--x
    int z= x+y;
    // % = modulus

    std::cout<<b;
    return 0;
}