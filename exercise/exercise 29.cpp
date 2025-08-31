#include <iostream>

using namespace std;

int main(){
    cout << "Enter a, b rectangle: ";
    int a, b;
    cin >> a >> b;
    
    cout << "Enter c square: ";
    int c;
    cin >> c;
    
    int s = a * b;
    int squareS = c * c;
    int x = (a / c) * (b / c);

    cout << x << " squares. " << endl;
    
    int y = s - (x * squareS);
    cout << "Remaining area: " << y << endl;
    system("PAUSE");
    return 0;
}