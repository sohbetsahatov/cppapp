#include <iostream>

using namespace std;

int main() {
    cout << "Enter three-digit number: ";
    int number;
    cin >> number;
    if(number > 99 && number < 1000){
        int y = number / 100;
        int a = number % 100;
        int b = a / 10;
        int c = a % 10;
        cout << b << c << y << endl;
        
    }else{
        cout << "Error! This number is not three digit number. " << endl;
    }

    system("PAUSE");
    return 0;
}
