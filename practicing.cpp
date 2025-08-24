#include <iostream>

using namespace std;

int metreAmount = 100;

int main(){

    
    cout << "Enter Amount of centimetres: ";
    double centimetr;
    cin >> centimetr;
    double metre = centimetr / metreAmount;

    if(metre == 1){
        cout << metre << " Metre" << endl;
    }else{
        cout << metre << " Metres" << endl;
    }


    system("PAUSE");
    return 0;
}
