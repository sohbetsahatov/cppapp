#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int age;
    cout << "Please enter your age: ";
    cin >> age;
    bool result = age > 10 && age < 30;
    cout << left << setw(15) << boolalpha << result;

    system("PAUSE");
    return 0;
}