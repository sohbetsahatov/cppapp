#include <iostream>

using namespace std;

int main(){
    int temperature;
    cin >> temperature;

    if(temperature <= 60){
        cout << "cold";
    }else if (temperature <= 90){
        cout << "Nice";
    }else{
        cout << "Hot";
    }
    
    system("PAUSE");
    return 0;
}