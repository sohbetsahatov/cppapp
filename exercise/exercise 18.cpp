#include <iostream>

using namespace std;

int main(){

    cout << "Enter a number bigger than 999: ";
    int number;
    cin >> number;
    if(number > 999){
        int x = number / 1000;
        int y = x % 10;
        cout << y << endl;
    }else{
        cout << "Error! This number is not bigger than 999 " << endl;
    }

    system("PAUSE");
    return 0;
}
