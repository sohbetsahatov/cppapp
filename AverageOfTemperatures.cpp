#include <iostream>

using namespace std;

int main(){

    int temperatures[] = {45, 60, 70};

    double sum  = 0;

    for(int temperature : temperatures){
        sum += temperature;
    }
    short count = sizeof(temperatures) / sizeof(int);
    
    cout << sum / count;

    system("pause");
    return 0;
}