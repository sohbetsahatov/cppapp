#include <iostream>

using namespace std;

int main(){

    cout << "Enter seconds: ";
    int seconds;
    cin >> seconds;
    int minutes = seconds / 60;
    int hours = minutes / 60;
    if(hours == 1){
        cout << hours << " hour passed" << endl;
    }else{
        cout << hours << " hours passed" << endl;
    }

    system("PAUSE");
    return 0;
}