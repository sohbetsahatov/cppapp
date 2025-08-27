#include <iostream>

using namespace std;

int main() {
    cout << "Enter two-digit number: ";
    int number;
    cin >> number;
    if(number > 9 && number < 100){
        cout << number / 10 << endl;
        cout << number % 10 << endl;
    }else{
        cout << "Error! This number is not two-digit number! " << endl;
    }
    


    system("PAUSE");
    return 0;
}
