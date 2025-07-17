#include <iostream>

using namespace std;

int main(){
    
    cout << "Enter Two Value: ";

    double first_number;
    double second_number;
    cin >> first_number;
    cin >> second_number;
    double number = (first_number > second_number) ? first_number : second_number;
    cout << number;

    system("PAUSE");
    return 0;
}