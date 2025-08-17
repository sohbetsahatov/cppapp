#include <iostream>

using namespace std;

int main()
{
    int values[3] = {700, 40, 80};
    auto [x, y, z] = values;
    cout << x << " " << y << " " << z << endl;

    return 0;
}