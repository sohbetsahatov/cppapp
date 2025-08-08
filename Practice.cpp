#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    cout << "Enter 3 names: ";
    string names[3];

    cout << "Name: ";
    getline(cin, names[0]);

    cout << "Name: ";
    getline(cin, names[1]);

    cout << "Name: ";
    getline(cin, names[2]);


    cout << names[0];
      
    system("PAUSE");
    return 0;
}