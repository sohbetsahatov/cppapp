#include <iostream>

using namespace std;

int main(){

    cout << "Enter seconds: ";
    int seconds;
    cin >> seconds;
    int lastSeconds = seconds % 3600;
    if(lastSeconds == 1){
        cout << "After last hour " << lastSeconds << " second passed." << endl;
    }else{
        cout << "After last hour " << lastSeconds << " seconds passed." << endl;
    }
    system("PAUSE");
    return 0;
}