#include <iostream>

using namespace std;

int main() {
    int sales = 95000;
    double state_tax = sales * 0.04;
    double county_tax = sales * 0.02; 
    cout << "State Tax = " << state_tax << endl;
    cout << "County Tax = " << county_tax <<endl;
    int sum_payment = state_tax + county_tax;
    int galan_pul = sales - sum_payment;
    cout<< "Galan Pul = " << galan_pul;

    system("PAUSE");

    return 0; 
}