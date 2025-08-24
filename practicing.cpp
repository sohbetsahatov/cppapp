#include <iostream>

using namespace std;

    int main(){
    cout << "Enter two-digit number: ";
    int twoDigitnumber;
    cin >> twoDigitnumber;
    
    if(twoDigitnumber > 9 && twoDigitnumber < 100){
        int firstdigit = twoDigitnumber / 10;
        int secondDigit = twoDigitnumber % 10;
    
        cout << "Sum of digits = " << firstdigit + secondDigit << endl;
    }else{
        cout << "This number is not two-digit" << endl;
    }
    

    system("PAUSE");
    return 0;
}
