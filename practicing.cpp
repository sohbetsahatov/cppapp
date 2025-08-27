#include <iostream>

using namespace std;

int main() {
    cout << "Enter two-digit number: ";
    int number;
    cin >> number;
    if(number > 9 && number < 100){
        int x = number / 10;
        int y = number % 10;
        cout << y << x << endl;
    }else{
        cout << "Error! This is not two-digit number! " << endl;
    }

    system("PAUSE");
    return 0;
}
