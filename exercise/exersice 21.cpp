#include <iostream>

using namespace std;

int main(){

    cout << "Enter seconds: ";
    int seconds;
    cin >> seconds;
    int lastSeconds = seconds % 60;
    if(lastSeconds == 1){
        cout << "After last minute " << lastSeconds << " second passed." << endl;
    }else{
        cout << "After last minute " << lastSeconds << " seconds passed." << endl;
    }
    system("PAUSE");
    return 0;
}