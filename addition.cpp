#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    const int max_value = 6;
    const int min_value = 1;

    srand(time(0));
    short result1 = (rand() % (max_value - min_value + 1)) + min_value;
    short result2 = (rand() % (max_value - min_value + 1)) + min_value;

    cout << result1 << ", " << result2;

    system("PAUSE");

    return 0; 
}