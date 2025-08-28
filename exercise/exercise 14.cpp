#include <iostream>

using namespace std;

int main(){

    cout << "Enter three-digit number: ";
    int number;
    cin >> number;
    if(number > 99 && number < 1000){
        int firstDigit = number / 100;
        int x = number % 100;
        int secondDigit = x / 10;
        int thirdDigit = x % 10;
        cout << thirdDigit << firstDigit << secondDigit << endl; 
    }else{
        cout << "Error! This is not three-digit number! " << endl;
    }

    system("PAUSE");
    return 0;
}