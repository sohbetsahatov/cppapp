#include <iostream>
#include <limits>

using namespace std;

int main() {
   
    int number = numeric_limits<int>::max();
    number++;
    cout << number;

        system("PAUSE");

    return 0; 
}