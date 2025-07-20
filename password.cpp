#include <iostream>

using namespace std;

int main(){

    short password = 3008;
    int entering_password = 0;
    
    while(entering_password != password){
        cout << "Please enter password: " << endl;
        cin >> entering_password;
        if (entering_password == password){
            cout << "Welcome!";
        }
    }

    system("PAUSE");
    return 0;
}