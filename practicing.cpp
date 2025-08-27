#include <iostream>

using namespace std;

int main() {
    cout << "Enter three-digit number: ";
    int number;
    cin >> number;
    if(number > 99 && number < 1000){
        int x = number / 100;
        cout << "First digit of this number: " << x << endl;
    }else{
        cout << "Error! This is not three digit number! " << endl;
    }

    system("PAUSE");
    return 0;
}
