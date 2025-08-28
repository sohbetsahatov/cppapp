#include <iostream>

using namespace std;

int main(){

    cout << "Enter seconds: ";
    int seconds;
    cin >> seconds;
    int minutes = seconds / 60;
    if (minutes == 1){
        cout << minutes << " minute passed" << endl;
    }else {
        cout << minutes << " minutes passed" << endl;
    }

    system("PAUSE");
    return 0;
}