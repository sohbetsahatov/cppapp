#include <iostream>

using namespace std;

int main() {
   
    string street;
        cout << "Enter your Street: ";
        getline(cin, street);

    string city;
        cout << "Enter your city: ";
            getline(cin, city);
    
    string state;
        cout << "Enter your State: ";
            getline(cin, state);

    string zipcode;
        cout << "Enter your zipcode: ";
            getline(cin, zipcode);
            
        cout << street << endl;
        cout << city <<", " << state <<", " << zipcode << endl;


        system("PAUSE");

    return 0; 
}