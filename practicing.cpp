#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if(a > b){
        cout << a / b << endl;
    }else {
        cout << "Error" << endl;
    }
    


    system("PAUSE");
    return 0;
}
