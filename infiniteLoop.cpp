#include <iostream>

using namespace std;

int main(){

    while(true){
        int number;
        cout << "number: ";
        cin >> number;
            if(number <= 1 || number >= 5)
                cout << "Error! Number must be between 1 and 5! " << endl;
            else 
                break;
    }

    system("PAUSE");
    return 0;
}