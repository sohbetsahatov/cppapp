#include <iostream>

using namespace std;

int s = 100;
int main() {
    cout << "Enter distance in centimetr: ";
    int distanceInCentimetr;
    cin >> distanceInCentimetr;
    int metre = distanceInCentimetr / s;
    if (metre != 1){
        cout << metre << " Metres" << endl;
    }else{
        cout << metre << " Metre" << endl;
    }


    system("PAUSE");
    return 0;
}
