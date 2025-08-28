#include <iostream>

using namespace std;

int main(){

    cout << "Enter seconds: ";
    int seconds;
    cin >> seconds;
    int lastMinutes = (seconds % 3600) / 60;
    if(lastMinutes == 1){
        cout << "After last hour " << lastMinutes << " minute passed." << endl;
    }else{
        cout << "After last hour " << lastMinutes << "minutes passed." << endl;
    }
    system("PAUSE");
    return 0;
}