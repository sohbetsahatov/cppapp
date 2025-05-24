#include <iostream>

using namespace std;

int main() {
    cout << " Fahrenheit - i giriz  ";
    double fahrenheit;
    cin >> fahrenheit;
    double calseus = (fahrenheit - 32) * 5 / 9;
    cout <<" " << calseus;
    system("PAUSE");

    return 0; 
}