#include <iostream>

using namespace std;

int main(){
    short number = 100;
    int another = number;
    //the size of short type is smaller than that of int type. 
    //then, short will fit in int and the remaining extra bytes will be zeros.
    //but, int will not fit in short.
    cout<<another;
    return 0;
}