#include <iostream>

using namespace std;

int main() {
    cout << "Enter two-digit number: ";
    int number;
    cin >> number;
    if(number > 9 && number < 100){
        int x = number / 10;
        int y = number % 10;
        int sum = x + y;
        cout << "Sum of digits = " << sum << endl;
        int multiple = x * y;
        cout << "multiple of digits = " << multiple << endl;
    }else{
        cout << "Error! This is not two-digit number! " << endl;
    }

    system("PAUSE");
    return 0;
}
