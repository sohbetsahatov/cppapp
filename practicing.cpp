#include <iostream>

using namespace std;

int m = 1000;
int main() {
    cout << "Enter kilogram: ";
    int kilogram;
    cin >> kilogram;
    int ton = kilogram / m;
    if(ton != 1){
        cout << ton << " Tons" << endl;
    }else{
        cout << ton << " Ton" << endl;
    }
    


    system("PAUSE");
    return 0;
}
