#include <iostream>

using namespace std;

int main(){
    
        cout << "Enter two Number and an operator: ";

        double number1;
        double number2;
        char an_operator;
        cin >> number1 >> number2 >> an_operator;

    switch(an_operator){
        case '+' :
            cout << number1 + number2;
            break;
        case '-' :
            cout << number1 - number2;
            break;
        case '*' :
            cout << number1 * number2;
            break;
        case '/' :
            cout << number1 / number2;
            break;
        default:
            cout << "Bye Bye";
  
    }

    system("PAUSE");
    return 0;
}