#include <iostream>

using namespace std;

int main(){
    cout << "Enter a month in number: ";
    int month;
    cin >> month;

    if(month == 12 || month == 1 || month == 2){
        cout << "This month is a winter month. " << endl;
    }else if(month > 2 && month < 6){
        cout << "This month is a spring month. " << endl;
    }else if(month > 5 && month < 9){
        cout << "This month is a summer month. " << endl;
    }else if(month > 8 && month < 12){
        cout << "This month is a autumn month " << endl;
    }else{
        cout << "Error" << endl;
    }


    system("Pause");
    return 0;
}