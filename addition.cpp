#include <iostream>
#include <cmath>
using namespace std;

int main() {
   
    cout<<"enter radius: ";
    double radius;
    cin>> radius;
    const double pi = 3.14;
    double result = pi*pow(radius,2);
    cout<< result; 

    system("PAUSE");

    return 0; 
}