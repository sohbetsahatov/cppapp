#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void greet(string firstName, string lastName){
    cout << "Hello " << firstName << " " << lastName << endl;
}

int integer(int first, int second){
    if(first > second){
        return first;
    }else{
        return second;
    }
}
int main(){

    int number = integer(2, 88);

    cout << number << endl;


    system("PAUSE");
    return 0;
}