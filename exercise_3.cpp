#include <iostream>

using namespace std;

int main(){
    double Sales=95000;
    double StateTaxRate = 0.04;
    double CountyTaxRate = 0.02;
    double StateTax = Sales*StateTaxRate;
    double CountyTax = Sales*CountyTaxRate;
    cout<<"Sales = $"<<Sales<<endl
        <<"State Tax = $"<<StateTax<<endl
        <<"County Tax = $"<<CountyTax<<endl
        <<"Total Tax = $"<<StateTax+CountyTax;

    return 0;
}