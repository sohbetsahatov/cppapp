#include <iostream>

using namespace std;

int main(){

    int temperatures[] = {20, 30, 50, 40};
    double average = 0;
    for (int i = 0; i < sizeof(temperatures) / sizeof(int); i++)
    {
        average += temperatures[i];
    }
    double result = average / (sizeof(temperatures) / sizeof(int));
    cout << result << endl;
    return 0;
}