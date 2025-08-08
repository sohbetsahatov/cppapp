#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    cout << "Street: ";
    string street;
    getline(cin, street);

    cout << "City: ";
    string city;
    getline(cin, city);

    cout << "state: ";
    string state;
    getline(cin, state);

    cout << "Zip Code: ";
    string zipCode;
    getline(cin, zipCode);

    cout << street << endl;
    cout << city << ", " << state << ", " << zipCode << endl;
      
    system("PAUSE");
    return 0;
}