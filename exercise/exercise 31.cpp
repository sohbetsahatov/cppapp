#include <iostream>

using namespace std;

int main(){
    cout << "Enter a number between 1 - 5: ";
    int number;
    cin >> number;

    if(number == 1){
        cout << "Bad" << endl;
    }else if (number == 2){
        cout << "Unsatisfactory" << endl;
    }else if(number == 3){
        cout << "Satisfactory" << endl;
    }else if(number == 4){
        cout << "Good" << endl;
    }else if(number == 5){
        cout << "Very good" << endl;
    }else{
        cout << "False" << endl;
    }

    system("PAUSE");
    return 0;
}