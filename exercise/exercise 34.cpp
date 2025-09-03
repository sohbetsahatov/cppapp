#include <iostream>
#include <cmath>


using namespace std;

int main(){
    
    double firstNumber;
    double secondNumber;
    char result;
    cin >> firstNumber >> result >> secondNumber;

    switch (result){
        case '+':
            cout << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << firstNumber * secondNumber << endl;
            break;
        case '/':
            cout << firstNumber / secondNumber << endl;
    
        default:
            cout << "Invalid operator" << endl;
    }

    
      
    system("PAUSE");
    return 0;
}