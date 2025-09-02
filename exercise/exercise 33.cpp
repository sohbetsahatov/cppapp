#include <iostream>

using namespace std;

int main(){

    cout << "How many days is this year? (365 or 366) " ;
    int year;
    cin >> year;

    cout << "Which month is it now? (1-12): ";
    int month;
    cin >> month;

    if(year == 365){
        if (month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 2){
            cout << "This month is 28 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else{
            cout << "Error" << endl;
        }
    }else if(year == 366){
        if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 2){
            cout << "This month is 29 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else if(month == 1){
            cout << "This month is 30 days. " << endl;
        }else if(month == 1){
            cout << "This month is 31 days. " << endl;
        }else{
            cout << "Error" << endl;
        }
    }else{
        cout << "Error" << endl; 
    }

    system("PAUSE");
    return 0;
}