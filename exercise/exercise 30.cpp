#include <iostream>

using namespace std;

int main(){
    cout << "Enter a year: ";
    int year;
    cin >> year;

    int century = ((year - 1) / 100) + 1;

    cout << century << " Century. " << endl;
    system("Pause");
    return 0;
}